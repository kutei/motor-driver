set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

# compiler settings
set(CMAKE_C_COMPILER arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER arm-none-eabi-g++)
set(CMAKE_EXE_LINKER arm-none-eabi-g++)

# library compile setting
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# parameter - CPU ARCH
set(CPU_ARCH "cortex-m3" CACHE STRING "CPU ARCHETECTURE")
if(CPU_ARCH MATCHES "^cortex-m[34]$")
    message("CPU_ARCH: ${CPU_ARCH}")
else()
    message(FATAL_ERROR "Value of CPU_ARCH is invalid.: [${CPU_ARCH}]")
endif()
string(SUBSTRING ${CPU_ARCH} 8 1 CORTEX_NUMBER)

# parameter - CPU NAME
set(CPU_NAME "STM32F103xB" CACHE STRING "NAME OF CPU")
if(CPU_NAME MATCHES "^STM32F.....$")
    message("CPU_NAME: ${CPU_NAME}")
else()
    message(FATAL_ERROR "Value of CPU_NAME is invalid.: [${CPU_NAME}]")
endif()

# CMAKE_XXX_FLAGSを設定
set(ARM_COMMON_FLAGS "-mcpu=${CPU_ARCH} -D${CPU_NAME} -mfloat-abi=soft -mthumb")
set(COMPILE_COMMON_FLAGS "${ARM_COMMON_FLAGS} -specs=nano.specs")
set(C_COMMON_FLAGS
    "${COMPILE_COMMON_FLAGS} -DARM_MATH_CM${CORTEX_NUMBER} \
    -DUSE_HAL_DRIVER -ffunction-sections -fdata-sections -fstack-usage"
)

set(CMAKE_AS_FLAGS
    "${COMPILE_COMMON_FLAGS} -x assembler-with-cpp"
    CACHE STRING "Compile options for Asseble files"
    FORCE
)
set(CMAKE_C_FLAGS
    "${C_COMMON_FLAGS} -std=gnu11 -fsingle-precision-constant -mslow-flash-data \
    '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))'"
    CACHE STRING "Compile options for C files"
    FORCE
)
set(CMAKE_CXX_FLAGS
    "${C_COMMON_FLAGS} -std=gnu++14 -fno-threadsafe-statics \
    -fno-use-cxa-atexit -fno-exceptions -fno-rtti"
    CACHE STRING "Compile options for C++ files"
    FORCE
)
set(CMAKE_EXE_LINKER_FLAGS
    "${ARM_COMMON_FLAGS} -L ${CMAKE_SOURCE_DIR} -T STM32F103C8Tx_FLASH.ld -static \
    -lc -lm -lstdc++ -lsupc++ --specs=nosys.specs -Xlinker --gc-sections -Wl,-Map=${CMAKE_PROJECT_NAME}.map"
    CACHE STRING ""
)

function(display_size APP_NAME)
    add_custom_command(TARGET ${APP_NAME} POST_BUILD
        COMMAND arm-none-eabi-size --format=berkeley "${APP_NAME}"
    )
endfunction()
