################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv5/tools/compiler/c6000_7.4.12

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./sample/main.obj" \
"./upp_common.obj" \
"./edmaIntDispatcher.obj" \
"./KeyStone_common.obj" \
"./Intc_ISR.obj" \
"./Intc.obj" \
"./Init.obj" \
"./Implement_WIT.obj" \
-l"libc.a" \
-ledma3_lld_drv_sample.ae66 \
-ledma3_lld_rm.ae66 \
-ledma3_lld_drv.ae66 \
-l"ti.csl.intc.ae66" \
-l"ti.csl.ae66" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include sample/subdir_vars.mk
-include subdir_rules.mk
-include sample/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: WIT_deblurring_bios6_debug.out

# Tool invocations
WIT_deblurring_bios6_debug.out: $(OBJS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C6000 Linker'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --display_error_number --diag_warning=225 --diag_wrap=off -z -m"WIT_deblurring_bios6_debug.map" --heap_size=0xFFFF -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/lib" -i"C:/ti/edma3_lld_02_11_05_02/packages/ti/sdo/edma3/drv/lib/66/debug" -i"C:/ti/edma3_lld_02_11_05_02/packages/ti/sdo/edma3/drv/sample/lib/c6657-evm/66/debug" -i"C:/ti/edma3_lld_02_11_05_02/packages/ti/sdo/edma3/rm/lib/c6657-evm/66/debug" -i"C:/ti/pdk_C6657_1_1_2_6/packages/ti/csl/lib" -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --reread_libs --warn_sections --display_error_number --diag_wrap=off --xml_link_info="WIT_deblurring_bios6_debug_linkInfo.xml" --rom_model -o "WIT_deblurring_bios6_debug.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(GEN_SRCS__QUOTED)$(GEN_MISC_FILES__QUOTED)$(C6000_EXECUTABLE_OUTPUTS__QUOTED)$(GEN_OPTS__QUOTED)$(GEN_CMDS__QUOTED) "WIT_deblurring_bios6_debug.out"
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-$(RM) "Implement_WIT.pp" "Init.pp" "Intc.pp" "Intc_ISR.pp" "KeyStone_common.pp" "edmaIntDispatcher.pp" "upp_common.pp" "sample\main.pp" 
	-$(RM) "Implement_WIT.obj" "Init.obj" "Intc.obj" "Intc_ISR.obj" "KeyStone_common.obj" "edmaIntDispatcher.obj" "upp_common.obj" "sample\main.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
