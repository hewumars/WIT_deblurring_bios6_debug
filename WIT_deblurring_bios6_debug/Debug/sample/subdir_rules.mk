################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
sample/main.obj: ../sample/main.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccsv5/tools/compiler/c6000_7.4.12/bin/cl6x" -mv6600 --abi=eabi -g --include_path="C:/ti/ccsv5/tools/compiler/c6000_7.4.12/include" --include_path="F:/myproject/git/loc_git/WIT_deblurring_bios6_debug" --include_path="F:/myproject/git/loc_git/WIT_deblurring_bios6_debug/cmd" --include_path="F:/myproject/git/loc_git/WIT_deblurring_bios6_debug/include" --include_path="F:/myproject/git/loc_git/WIT_deblurring_bios6_debug/sample" --include_path="F:/myproject/git/loc_git/WIT_deblurring_bios6_debug/src" --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="sample/main.pp" --obj_directory="sample" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


