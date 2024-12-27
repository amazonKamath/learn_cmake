add_library(my_math
    src/my_math.cpp
)
set(CMAKE_VERBOSE_MAKEFILE ON) 
# Expose include directory to consumers (PUBLIC)
target_include_directories(my_math PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link to my_utils publicly
target_link_libraries(my_math PUBLIC my_utils)
target_compile_options(my_math PRIVATE -Wall)
