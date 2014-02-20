################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/UnitTest/subdir.mk
-include src/Practice/SingleList/CircularList/subdir.mk
-include src/Practice/SingleList/subdir.mk
-include src/LinearList/SequelList/subdir.mk
-include src/LinearList/LinkList/SingleLinkList/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: DataStructure

# Tool invocations
DataStructure: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MacOS X C Linker'
	gcc  -o "DataStructure" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) DataStructure
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
