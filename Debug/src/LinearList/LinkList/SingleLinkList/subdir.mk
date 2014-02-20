################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/LinearList/LinkList/SingleLinkList/LinkListOperator.c 

OBJS += \
./src/LinearList/LinkList/SingleLinkList/LinkListOperator.o 

C_DEPS += \
./src/LinearList/LinkList/SingleLinkList/LinkListOperator.d 


# Each subdirectory must supply rules for building sources it contributes
src/LinearList/LinkList/SingleLinkList/%.o: ../src/LinearList/LinkList/SingleLinkList/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


