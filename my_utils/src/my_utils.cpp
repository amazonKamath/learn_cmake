// my_utils/src/my_utils.cpp
#include "my_utils.h"
#include "my_external_lib.h" // Use external_lib internally

void print_message(const std::string& message) {
    do_something_from_external_lib(); // Internal use of external_lib
    std::cout << message << std::endl;
}
