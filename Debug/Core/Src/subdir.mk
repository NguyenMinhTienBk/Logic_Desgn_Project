################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/button.c \
../Core/Src/clock.c \
../Core/Src/fsm_buz.c \
../Core/Src/fsm_mode.c \
../Core/Src/fsm_mode_Led7Seg.c \
../Core/Src/global.c \
../Core/Src/input_reading.c \
../Core/Src/led_display.c \
../Core/Src/main.c \
../Core/Src/scheduler.c \
../Core/Src/software_timer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/timer.c 

OBJS += \
./Core/Src/button.o \
./Core/Src/clock.o \
./Core/Src/fsm_buz.o \
./Core/Src/fsm_mode.o \
./Core/Src/fsm_mode_Led7Seg.o \
./Core/Src/global.o \
./Core/Src/input_reading.o \
./Core/Src/led_display.o \
./Core/Src/main.o \
./Core/Src/scheduler.o \
./Core/Src/software_timer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/timer.o 

C_DEPS += \
./Core/Src/button.d \
./Core/Src/clock.d \
./Core/Src/fsm_buz.d \
./Core/Src/fsm_mode.d \
./Core/Src/fsm_mode_Led7Seg.d \
./Core/Src/global.d \
./Core/Src/input_reading.d \
./Core/Src/led_display.d \
./Core/Src/main.d \
./Core/Src/scheduler.d \
./Core/Src/software_timer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/timer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/button.d ./Core/Src/button.o ./Core/Src/button.su ./Core/Src/clock.d ./Core/Src/clock.o ./Core/Src/clock.su ./Core/Src/fsm_buz.d ./Core/Src/fsm_buz.o ./Core/Src/fsm_buz.su ./Core/Src/fsm_mode.d ./Core/Src/fsm_mode.o ./Core/Src/fsm_mode.su ./Core/Src/fsm_mode_Led7Seg.d ./Core/Src/fsm_mode_Led7Seg.o ./Core/Src/fsm_mode_Led7Seg.su ./Core/Src/global.d ./Core/Src/global.o ./Core/Src/global.su ./Core/Src/input_reading.d ./Core/Src/input_reading.o ./Core/Src/input_reading.su ./Core/Src/led_display.d ./Core/Src/led_display.o ./Core/Src/led_display.su ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/scheduler.d ./Core/Src/scheduler.o ./Core/Src/scheduler.su ./Core/Src/software_timer.d ./Core/Src/software_timer.o ./Core/Src/software_timer.su ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/timer.d ./Core/Src/timer.o ./Core/Src/timer.su

.PHONY: clean-Core-2f-Src

