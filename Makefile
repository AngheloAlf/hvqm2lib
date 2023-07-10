
TARGET := libhvqm2
BASE_DIR := base_$(TARGET)
PATCHED_DIR := patched_$(TARGET)
BASE_AR := $(TARGET).a
BUILD_DIR := build


UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
	DETECTED_OS := windows
else ifeq ($(UNAME_S),Linux)
	DETECTED_OS := linux
else ifeq ($(UNAME_S),Darwin)
	DETECTED_OS := mac
	MAKE := gmake
	CPPFLAGS += -xc++
endif


COMPILER_DIR    := tools/gcc_kmc/$(DETECTED_OS)/2.7.2
CC              := COMPILER_PATH=$(COMPILER_DIR) $(COMPILER_DIR)/gcc


AR              := ar

DISASSEMBLER        := elfObjDisasm
DISASSEMBLER_FLAGS  := --Mreg-names o32 --no-use-fpccsr --compiler GCC --asm-referencee-symbols


IINC       := -I include -I include/libultra/ -I include/libultra/PR  -I include/hvqm/


CFLAGS          += -nostdinc -fno-PIC -G 0 -mgp32 -mfp32 -fno-common -funsigned-char

WARNINGS        := -w

ASFLAGS         := -march=vr4300 -32 -G0
COMMON_DEFINES  := -D_MIPS_SZLONG=32 -D__USE_ISOC99
# Not sure about those two yet
# GBI_DEFINES     := -DF3DEX_GBI_2
# RELEASE_DEFINES := -DNDEBUG -D_FINALROM
AS_DEFINES      := -DMIPSEB -D_LANGUAGE_ASSEMBLY -D_ULTRA64
C_DEFINES       := -D_LANGUAGE_C
ENDIAN          := -EB

OPTFLAGS        := -O2
MIPS_VERSION    := -mips3


# Variable to simplify C compiler invocation
C_COMPILER_FLAGS = $(CFLAGS) $(BUILD_DEFINES) $(IINC) $(WARNINGS) $(MIPS_VERSION) $(ENDIAN) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(OPTFLAGS)




SRC_DIRS := $(shell find src -type d)
C_FILES  := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
O_FILES  := $(foreach f,$(C_FILES:.c=.o),$(BUILD_DIR)/$f)


BASE_OBJS       := $(wildcard $(BASE_DIR)/*.o)
DISASM_TARGETS  := $(BASE_OBJS:$(BASE_DIR)/%.o=asm/full/%/.disasm)

$(shell mkdir -p asm $(BASE_DIR) $(PATCHED_DIR) src $(foreach dir,$(ASM_DIRS) $(SRC_DIRS),$(BUILD_DIR)/$(dir)))

all: $(O_FILES)

diff-init: all
	$(RM) -rf expected/
	mkdir expected/
	cp -r build/ expected/

clean:
	$(RM) -rf $(BUILD_DIR)

distclean: clean
	$(MAKE) -C tools distclean
	$(RM) -rf $(BASE_DIR) asm

setup:
	$(MAKE) -C tools
	cd $(BASE_DIR) && $(AR) xo ../$(BASE_AR)
	chmod -R +rw $(BASE_DIR)

	cd $(PATCHED_DIR) && $(AR) xo ../$(BASE_AR)
	chmod -R +rw $(PATCHED_DIR)
	./tools/patch_static_syms.sh

disasm: $(DISASM_TARGETS)

.PHONY: all diff-init clean distclean setup


asm/full/%/.disasm: $(BASE_DIR)/%.o
	$(RM) -rf asm/full/$* asm/functions/$*
	$(DISASSEMBLER) $(DISASSEMBLER_FLAGS) $< asm/full/$* --split-functions asm/functions/ --save-context context/$*.csv
#	@touch $@



$(BUILD_DIR)/%.o: %.c
	$(CC) $(C_COMPILER_FLAGS) -I $(dir $*) -c -o $@ $<



# Disable built-in rules
.SUFFIXES:

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
