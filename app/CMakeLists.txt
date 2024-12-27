add_executable(my_app
    src/main.cpp
)

# Link to my_math (transitively links to my_utils and external_lib)
target_link_libraries(my_app PRIVATE my_math)


