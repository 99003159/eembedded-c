################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Src/STM32FXX_GPIO_DRIVER.c 

OBJS += \
./Drivers/Src/STM32FXX_GPIO_DRIVER.o 

C_DEPS += \
./Drivers/Src/STM32FXX_GPIO_DRIVER.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Src/STM32FXX_GPIO_DRIVER.o: ../Drivers/Src/STM32FXX_GPIO_DRIVER.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F407G_DISC1 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -c -I"C:/Users/99003159/Desktop/Embedded C/Driver_1/Drivers/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Src/STM32FXX_GPIO_DRIVER.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

