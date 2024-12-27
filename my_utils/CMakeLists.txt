add_library(my_utils
    src/my_utils.cpp
)
set(CMAKE_VERBOSE_MAKEFILE ON) 
# Expose include directory to consumers (PUBLIC)
target_include_directories(my_utils PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link to external_lib privately
target_link_libraries(my_utils PRIVATE external_lib)

target_compile_options(my_utils PRIVATE -Wall -Wextra)

