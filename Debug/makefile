################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv8/tools/compiler/ti-cgt-msp430_18.1.4.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./__Templates/Cpp_source.obj" \
"./src/ADC.obj" \
"./src/LCD.obj" \
"./src/PWM.obj" \
"./src/UART.obj" \
"./src/button.obj" \
"./src/functions.obj" \
"./src/main.obj" \
"../lnk_msp430fr4133.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include __Templates/subdir_vars.mk
-include src/subdir_vars.mk
-include subdir_rules.mk
-include __Templates/subdir_rules.mk
-include src/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
FarmersOnly.com.out \

EXE_OUTPUTS__QUOTED += \
"FarmersOnly.com.out" \

BIN_OUTPUTS += \
FarmersOnly.com.hex \

BIN_OUTPUTS__QUOTED += \
"FarmersOnly.com.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "FarmersOnly.com.out"

# Tool invocations
FarmersOnly.com.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: MSP430 Linker'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-msp430_18.1.4.LTS/bin/cl430" -vmspx --use_hw_mpy=none --advice:power=all --advice:hw_config=all --define=__MSP430FR4133__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 -z -m"FarmersOnly.com.map" --heap_size=160 --stack_size=160 --cinit_hold_wdt=on -i"C:/ti/ccsv8/ccs_base/msp430/include" -i"C:/ti/ccsv8/tools/compiler/ti-cgt-msp430_18.1.4.LTS/lib" -i"C:/ti/ccsv8/tools/compiler/ti-cgt-msp430_18.1.4.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="FarmersOnly.com_linkInfo.xml" --use_hw_mpy=none --rom_model -o "FarmersOnly.com.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

FarmersOnly.com.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: MSP430 Hex Utility'
	"C:/ti/ccsv8/tools/compiler/ti-cgt-msp430_18.1.4.LTS/bin/hex430" --memwidth=8 --romwidth=8 -o "FarmersOnly.com.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "__Templates\Cpp_source.obj" "src\ADC.obj" "src\LCD.obj" "src\PWM.obj" "src\UART.obj" "src\button.obj" "src\functions.obj" "src\main.obj" 
	-$(RM) "src\ADC.d" "src\LCD.d" "src\PWM.d" "src\UART.d" "src\button.d" "src\functions.d" "src\main.d" 
	-$(RM) "__Templates\Cpp_source.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

