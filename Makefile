
TARGET := libhvqm2
BASE_DIR := base_$(TARGET)
BASE_AR := $(TARGET).a
BUILD_DIR := build

AR              := ar
DISASSEMBLER    := elfObjDisasm

BASE_OBJS       := $(wildcard $(BASE_DIR)/*.o)
DISASM_TARGETS  := $(BASE_OBJS:$(BASE_DIR)/%.o=asm/%/.disasm)

$(shell mkdir -p asm $(BASE_DIR) src $(BUILD_DIR)/$(BASE_DIR) $(foreach dir,$(ASM_DIRS) $(SRC_DIRS),$(BUILD_DIR)/$(dir)))

clean:
	$(RM) -rf $(BUILD_DIR)

distclean: clean
	$(RM) -rf $(BASE_DIR)

setup:
	cd $(BASE_DIR) && $(AR) xo ../$(BASE_AR)
	chmod -R +r $(BASE_DIR)

disasm: $(DISASM_TARGETS)



asm/%/.disasm: $(BASE_DIR)/%.o
	$(DISASSEMBLER) $< asm/$*
	@touch $@


# Disable built-in rules
.SUFFIXES:

print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true
