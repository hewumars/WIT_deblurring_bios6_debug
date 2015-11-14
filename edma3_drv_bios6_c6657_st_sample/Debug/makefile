################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv5/tools/compiler/c6000_7.4.12

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./qdma_test.obj" \
"./qdma_link_test.obj" \
"./mcip_bmp_utils.obj" \
"./main.obj" \
"./dma_test.obj" \
"./dma_poll_test.obj" \
"./dma_ping_pong_test.obj" \
"./dma_misc_test.obj" \
"./dma_link_test.obj" \
"./dma_chain_test.obj" \
"./common.obj" \
-ledma3_lld_drv_sample.ae66 \
-ledma3_lld_rm.ae66 \
-ledma3_lld_drv.ae66 \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
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
all: edma3_drv_bios6_c6657_st_sample.out

dependents:
	-cd F:/myproject/edma3_drv_bios6_c6657_st_sample_configuration/Debug && $(MAKE) clean all

# Tool invocations
edma3_drv_bios6_c6657_st_sample.out: $(OBJS) $(GEN_CMDS) F:/myproject/edma3_drv_bios6_c6657_st_sample_configuration/Debug/configPkg/linker.cmd
	@echo 'Building target: $@'
	@echo 'Invoking: C6000 Linker'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 -g --diag_warning=225 --abi=eabi -z -m"edma3_drv_bios6_c6657_st_sample.map" --warn_sections -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/lib" -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" -i"C:/ti/edma3_lld_02_11_05_02/packages/ti/sdo/edma3/drv/lib/66/debug" -i"C:/ti/edma3_lld_02_11_05_02/packages/ti/sdo/edma3/drv/sample/lib/c6657-evm/66/debug" -i"C:/ti/edma3_lld_02_11_05_02/packages/ti/sdo/edma3/rm/lib/c6657-evm/66/debug" -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/lib" -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --reread_libs --rom_model -l"F:/myproject/edma3_drv_bios6_c6657_st_sample_configuration/Debug/configPkg/linker.cmd" -o "edma3_drv_bios6_c6657_st_sample.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C6000_EXECUTABLE_OUTPUTS__QUOTED) "edma3_drv_bios6_c6657_st_sample.out"
	-$(RM) "common.pp" "dma_chain_test.pp" "dma_link_test.pp" "dma_misc_test.pp" "dma_ping_pong_test.pp" "dma_poll_test.pp" "dma_test.pp" "main.pp" "mcip_bmp_utils.pp" "qdma_link_test.pp" "qdma_test.pp" 
	-$(RM) "common.obj" "dma_chain_test.obj" "dma_link_test.obj" "dma_misc_test.obj" "dma_ping_pong_test.obj" "dma_poll_test.obj" "dma_test.obj" "main.obj" "mcip_bmp_utils.obj" "qdma_link_test.obj" "qdma_test.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:
F:/myproject/edma3_drv_bios6_c6657_st_sample_configuration/Debug/configPkg/linker.cmd:

-include ../makefile.targets
