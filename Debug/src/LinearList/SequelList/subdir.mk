################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/LinearList/SequelList/SeqOperator.c 

OBJS += \
./src/LinearList/SequelList/SeqOperator.o 

C_DEPS += \
./src/LinearList/SequelList/SeqOperator.d 


# Each subdirectory must supply rules for building sources it contributes
src/LinearList/SequelList/%.o: ../src/LinearList/SequelList/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


