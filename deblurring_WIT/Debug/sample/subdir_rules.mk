################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
sample/main.obj: ../sample/main.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/deblurring_WIT/cmd" --include_path="F:/myproject/deblurring_WIT/include" --include_path="F:/myproject/deblurring_WIT/src" --include_path="F:/myproject/deblurring_WIT/sample" --include_path="C:/ti/pdk_C6657_1_1_2_6/packages" --include_path="C:/ti/pdk_C6657_1_1_2_6/packages/ti/csl" --include_path="C:/ti/pdk_C6657_1_1_2_6/packages/ti/csl/src/intc" --display_error_number --diag_warning=225 --abi=eabi --preproc_with_compile --preproc_dependency="sample/main.pp" --obj_directory="sample" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


