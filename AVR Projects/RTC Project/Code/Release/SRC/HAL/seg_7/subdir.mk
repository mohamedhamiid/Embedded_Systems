################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SRC/HAL/seg_7/Seg_7.c 

OBJS += \
./SRC/HAL/seg_7/Seg_7.o 

C_DEPS += \
./SRC/HAL/seg_7/Seg_7.d 


# Each subdirectory must supply rules for building sources it contributes
SRC/HAL/seg_7/%.o: ../SRC/HAL/seg_7/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


