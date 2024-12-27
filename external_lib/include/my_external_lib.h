#ifndef MY_EXTERNAL_LIB_H
#define MY_EXTERNAL_LIB_H

#include <iostream>

// Inline function directly in the header file
inline void do_something_from_external_lib() {
    std::cout << "Doing something from the external library!" << std::endl;
}

#endif

