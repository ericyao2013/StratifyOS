################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/sys/dirent/dirent.c 

OBJS += \
./src/sys/dirent/dirent.o 

C_DEPS += \
./src/sys/dirent/dirent.d 


# Each subdirectory must supply rules for building sources it contributes
src/sys/dirent/%.o: ../src/sys/dirent/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-none-eabi-gcc -D__StratifyOS__ -D__armv7em -D__sys -D__ -I"/Users/tgil/git/StratifyOS/include/posix" -I"/Users/tgil/git/StratifyOS/include" -I"/Users/tgil/git/StratifyOS/src" -I"/Applications/StratifyLabs-SDK/Tools/gcc/arm-none-eabi/include" -Os -Wall -c -ffunction-sections -fomit-frame-pointer -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -U__SOFTFP__ -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


