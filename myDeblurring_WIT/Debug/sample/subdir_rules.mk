################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
sample/main.obj: ../sample/main.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="F:/myproject/git/loc_git/myDeblurring_WIT/cmd" --include_path="F:/myproject/git/loc_git/myDeblurring_WIT/include" --include_path="F:/myproject/git/loc_git/myDeblurring_WIT/sample" --include_path="F:/myproject/git/loc_git/myDeblurring_WIT/src" --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="C:/ti/pdk_C6657_1_1_2_6/packages" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="sample/main.pp" --obj_directory="sample" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


