################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Inc/STM_MY_LCD16X2.c 

OBJS += \
./Core/Inc/STM_MY_LCD16X2.o 

C_DEPS += \
./Core/Inc/STM_MY_LCD16X2.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Inc/STM_MY_LCD16X2.o: ../Core/Inc/STM_MY_LCD16X2.c Core/Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -IC:/Users/mathe/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.3/Drivers/STM32F1xx_HAL_Driver/Inc -IC:/Users/mathe/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.3/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -IC:/Users/mathe/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.3/Drivers/CMSIS/Device/ST/STM32F1xx/Include -IC:/Users/mathe/STM32Cube/Repository/STM32Cube_FW_F1_V1.8.3/Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Inc/STM_MY_LCD16X2.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

