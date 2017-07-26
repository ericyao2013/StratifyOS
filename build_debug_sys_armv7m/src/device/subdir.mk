################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/device/devfifo.c \
../src/device/ffifo.c \
../src/device/fifo.c \
../src/device/full.c \
../src/device/led.c \
../src/device/null.c \
../src/device/random.c \
../src/device/sd_crc.c \
../src/device/sdspi.c \
../src/device/sdssp.c \
../src/device/tty_uart.c \
../src/device/tty_usbbulk.c \
../src/device/uartfifo.c \
../src/device/urandom.c \
../src/device/usbfifo.c \
../src/device/zero.c 

OBJS += \
./src/device/devfifo.o \
./src/device/ffifo.o \
./src/device/fifo.o \
./src/device/full.o \
./src/device/led.o \
./src/device/null.o \
./src/device/random.o \
./src/device/sd_crc.o \
./src/device/sdspi.o \
./src/device/sdssp.o \
./src/device/tty_uart.o \
./src/device/tty_usbbulk.o \
./src/device/uartfifo.o \
./src/device/urandom.o \
./src/device/usbfifo.o \
./src/device/zero.o 

C_DEPS += \
./src/device/devfifo.d \
./src/device/ffifo.d \
./src/device/fifo.d \
./src/device/full.d \
./src/device/led.d \
./src/device/null.d \
./src/device/random.d \
./src/device/sd_crc.d \
./src/device/sdspi.d \
./src/device/sdssp.d \
./src/device/tty_uart.d \
./src/device/tty_usbbulk.d \
./src/device/uartfifo.d \
./src/device/urandom.d \
./src/device/usbfifo.d \
./src/device/zero.d 


# Each subdirectory must supply rules for building sources it contributes
src/device/%.o: ../src/device/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-none-eabi-gcc -D__StratifyOS__ -D__armv7m -D__sys -D___debug -I"/Users/tgil/git/StratifyOS/include/posix" -I"/Users/tgil/git/StratifyOS/include" -I"/Users/tgil/git/StratifyOS/src" -I"/Applications/StratifyLabs-SDK/Tools/gcc/arm-none-eabi/include" -Os -Wall -c -ffunction-sections -fomit-frame-pointer -march=armv7-m -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


