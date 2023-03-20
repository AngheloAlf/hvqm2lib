
TARGET := libhvqm2
BASE_DIR := base_$(TARGET)
BASE_AR := $(TARGET).a
BUILD_DIR := build

AR              := ar

DISASSEMBLER        := elfObjDisasm
DISASSEMBLER_FLAGS  := --Mreg-names o32 --no-use-fpccsr

BASE_OBJS       := $(wildcard $(BASE_DIR)/*.o)
DISASM_TARGETS  := $(BASE_OBJS:$(BASE_DIR)/%.o=asm/full/%/.disasm)

$(shell mkdir -p asm $(BASE_DIR) src $(BUILD_DIR)/$(BASE_DIR) $(foreach dir,$(ASM_DIRS) $(SRC_DIRS),$(BUILD_DIR)/$(dir)))

clean:
	$(RM) -rf $(BUILD_DIR)

distclean: clean
	$(MAKE) -C tools distclean
	$(RM) -rf $(BASE_DIR) asm

setup:
	$(MAKE) -C tools
	cd $(BASE_DIR) && $(AR) xo ../$(BASE_AR)
	chmod -R +rw $(BASE_DIR)

disasm: $(DISASM_TARGETS)



asm/full/%/.disasm: $(BASE_DIR)/%.o
	$(RM) -rf asm/full/$* asm/functions/$*
	$(DISASSEMBLER) $(DISASSEMBLER_FLAGS) $< asm/full/$* --split-functions asm/functions/
#	@touch $@


# Disable built-in rules
.SUFFIXES:

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
