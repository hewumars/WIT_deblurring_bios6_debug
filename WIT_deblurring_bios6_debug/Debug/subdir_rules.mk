################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Implement_WIT.obj: ../Implement_WIT.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/WIT_deblurring_bios6_debug/src" --include_path="F:/myproject/WIT_deblurring_bios6_debug/include" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="Implement_WIT.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Init.obj: ../Init.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/WIT_deblurring_bios6_debug/src" --include_path="F:/myproject/WIT_deblurring_bios6_debug/include" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="Init.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Intc.obj: ../Intc.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/WIT_deblurring_bios6_debug/src" --include_path="F:/myproject/WIT_deblurring_bios6_debug/include" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="Intc.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

Intc_ISR.obj: ../Intc_ISR.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/WIT_deblurring_bios6_debug/src" --include_path="F:/myproject/WIT_deblurring_bios6_debug/include" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="Intc_ISR.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

KeyStone_common.obj: ../KeyStone_common.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/WIT_deblurring_bios6_debug/src" --include_path="F:/myproject/WIT_deblurring_bios6_debug/include" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="KeyStone_common.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/compiler.opt: ../app.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_25_04_88/xs" --xdcpath="C:/ti/bios_6_33_06_50/packages;C:/ti/edma3_lld_02_11_05_02/packages;C:/ti/xdais_7_24_00_04/packages;C:/ti/xdais_7_24_00_04/examples;C:/ti/pdk_C6657_1_1_2_6/packages;C:/ti/ccsv5/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.elf.C66 -p ti.platforms.evm6657 -r release -c "C:/ti/ccsv5/tools/compiler/c6000_7.4.12" --compileOptions "-g --optimize_with_debug" "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: configPkg/compiler.opt
configPkg/: configPkg/compiler.opt

edmaIntDispatcher.obj: ../edmaIntDispatcher.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/WIT_deblurring_bios6_debug/src" --include_path="F:/myproject/WIT_deblurring_bios6_debug/include" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="edmaIntDispatcher.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

upp_common.obj: ../upp_common.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/WIT_deblurring_bios6_debug/src" --include_path="F:/myproject/WIT_deblurring_bios6_debug/include" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="upp_common.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


