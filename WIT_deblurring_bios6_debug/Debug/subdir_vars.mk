################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../app.cfg 

C_SRCS += \
../Implement_WIT.c \
../Init.c \
../Intc.c \
../Intc_ISR.c \
../KeyStone_common.c \
../edmaIntDispatcher.c \
../upp_common.c 

OBJS += \
./Implement_WIT.obj \
./Init.obj \
./Intc.obj \
./Intc_ISR.obj \
./KeyStone_common.obj \
./edmaIntDispatcher.obj \
./upp_common.obj 

GEN_SRCS += \
./configPkg/compiler.opt \
./configPkg/linker.cmd 

C_DEPS += \
./Implement_WIT.pp \
./Init.pp \
./Intc.pp \
./Intc_ISR.pp \
./KeyStone_common.pp \
./edmaIntDispatcher.pp \
./upp_common.pp 

GEN_MISC_DIRS += \
./configPkg/ 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_OPTS += \
./configPkg/compiler.opt 

GEN_SRCS__QUOTED += \
"configPkg\compiler.opt" \
"configPkg\linker.cmd" 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

C_DEPS__QUOTED += \
"Implement_WIT.pp" \
"Init.pp" \
"Intc.pp" \
"Intc_ISR.pp" \
"KeyStone_common.pp" \
"edmaIntDispatcher.pp" \
"upp_common.pp" 

OBJS__QUOTED += \
"Implement_WIT.obj" \
"Init.obj" \
"Intc.obj" \
"Intc_ISR.obj" \
"KeyStone_common.obj" \
"edmaIntDispatcher.obj" \
"upp_common.obj" 

C_SRCS__QUOTED += \
"../Implement_WIT.c" \
"../Init.c" \
"../Intc.c" \
"../Intc_ISR.c" \
"../KeyStone_common.c" \
"../edmaIntDispatcher.c" \
"../upp_common.c" 

GEN_OPTS__FLAG += \
--cmd_file="./configPkg/compiler.opt" 

GEN_CMDS__FLAG += \
-l"./configPkg/linker.cmd" 


