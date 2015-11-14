################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
configPkg/: ../edma3_drv_bios6_c6657_st_sample.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_23_04_60/xs" --xdcpath="C:/ti/bios_6_33_06_50/packages;C:/ti/edma3_lld_02_11_05_02/packages;C:/ti/ccsv5/ccs_base;C:/ti/xdais_7_24_00_04/packages;C:/ti/xdais_7_24_00_04/examples;" xdc.tools.configuro -o "configPkg" -t ti.targets.elf.C66 -p ti.platforms.evm6657 -r debug -c "C:/ti/ccsv5/tools/compiler/c6000_7.4.12" "$<"
	@echo 'Finished building: $<'
	@echo ' '


