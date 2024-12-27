add_library(external_lib INTERFACE)

# Provide include directories as INTERFACE (no source files needed)
target_include_directories(external_lib INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_options(external_lib INTERFACE -pedantic -std=c++20)

