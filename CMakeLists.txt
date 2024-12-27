cmake_minimum_required(VERSION 3.15)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_VERBOSE_MAKEFILE ON) 
add_subdirectory(external_lib)
add_subdirectory(my_utils)
add_subdirectory(my_math)
add_subdirectory(app)

#external_lib
#↑ (includes PUBLIC, linking PRIVATE)
#my_utils
#↑ (public dependency)
#my_math
#↑ (public dependency)
#app
#

#PRIVATE: Visible only to the current target.
#PUBLIC: Visible to both the current target and its consumers.
#INTERFACE: Only visible to consumers, not the current target.