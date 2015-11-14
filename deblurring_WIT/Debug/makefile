################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv5/tools/compiler/c6000_7.4.12

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./sample/main.obj" \
"./src/upp_common.obj" \
"./src/timer.obj" \
"./src/edmaIntDispatcher.obj" \
"./src/algorithm.obj" \
"./src/McBSP.obj" \
"./src/KeyStone_common.obj" \
"./src/Intc_ISR.obj" \
"./src/Intc.obj" \
"./src/Init.obj" \
"./src/Implement_WIT.obj" \
"./src/IPC.obj" \
"./src/EDMA_McBSP.obj" \
-l"libc.a" \
-l"C:\ti\pdk_C6657_1_1_2_6\packages\ti\csl\lib\ti.csl.ae66" \
-l"C:\ti\pdk_C6657_1_1_2_6\packages\ti\csl\lib\ti.csl.intc.ae66" \
"../cmd/Base_6657.cmd" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir_vars.mk
-include sample/subdir_vars.mk
-include cmd/subdir_vars.mk
-include src/subdir_rules.mk
-include sample/subdir_rules.mk
-include cmd/subdir_rules.mk
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
all: deblurring_WIT.out

# Tool invocations
deblurring_WIT.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C6000 Linker'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 -g --display_error_number --diag_warning=225 --abi=eabi -z -m"deblurring_WIT.map" --warn_sections --display_error_number -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/lib" -i"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --reread_libs --xml_link_info="deblurring_WIT_linkInfo.xml" --rom_model -o "deblurring_WIT.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C6000_EXECUTABLE_OUTPUTS__QUOTED) "deblurring_WIT.out"
	-$(RM) "src\EDMA_McBSP.pp" "src\IPC.pp" "src\Implement_WIT.pp" "src\Init.pp" "src\Intc.pp" "src\Intc_ISR.pp" "src\KeyStone_common.pp" "src\McBSP.pp" "src\algorithm.pp" "src\edmaIntDispatcher.pp" "src\timer.pp" "src\upp_common.pp" "sample\main.pp" 
	-$(RM) "src\EDMA_McBSP.obj" "src\IPC.obj" "src\Implement_WIT.obj" "src\Init.obj" "src\Intc.obj" "src\Intc_ISR.obj" "src\KeyStone_common.obj" "src\McBSP.obj" "src\algorithm.obj" "src\edmaIntDispatcher.obj" "src\timer.obj" "src\upp_common.obj" "sample\main.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
