* PUBLIC:
* The property is applied to the target itself and all targets that link to it.
* Use this for libraries whose headers and dependencies are part of the API.
* PRIVATE:
* The property is applied only to the target itself.
* Use this for libraries whose headers and dependencies are only needed internally.
* INTERFACE:
* The property is not applied to the target itself but to all targets that link to it.
* Use this for "header-only" libraries or settings (like compiler flags) that should propagate.

Key Points in the Structure:

1. external_lib/:

    * Represents a header-only library (INTERFACE) or pre-built library.
    * Contains my_external_lib.h 

1. my_utils/:

    * Contains utility functions and headers.
    * Compiled into a static library with its own compile options.

1. my_math/:

    * Depends on my_utils for additional functionality (e.g., print_message).
    * Compiled into a static library.

1. app/:

    * The final executable (my_app) consuming all other libraries.
    * Uses headers and functionality from my_utils, my_math, and external_lib.

1. Top-Level CMakeLists.txt:

    * Orchestrates the build process and includes subdirectorie

   external_lib
        ↑ (includes PUBLIC, linking PRIVATE)
    my_utils
        ↑ (public dependency)
    my_math
        ↑ (public dependency)
      app

