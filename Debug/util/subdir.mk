################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../util/DateUtils.cpp \
../util/NumPunctPTBR.cpp \
../util/NumberUtils.cpp \
../util/Tokenizer.cpp 

OBJS += \
./util/DateUtils.o \
./util/NumPunctPTBR.o \
./util/NumberUtils.o \
./util/Tokenizer.o 

CPP_DEPS += \
./util/DateUtils.d \
./util/NumPunctPTBR.d \
./util/NumberUtils.d \
./util/Tokenizer.d 


# Each subdirectory must supply rules for building sources it contributes
util/%.o: ../util/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


