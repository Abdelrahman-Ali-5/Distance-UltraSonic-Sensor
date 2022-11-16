################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Mini_Project_4_Test.c \
../UltraSonic_sensor.c \
../gpio.c \
../icu.c \
../lcd.c 

OBJS += \
./Mini_Project_4_Test.o \
./UltraSonic_sensor.o \
./gpio.o \
./icu.o \
./lcd.o 

C_DEPS += \
./Mini_Project_4_Test.d \
./UltraSonic_sensor.d \
./gpio.d \
./icu.d \
./lcd.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


