cmake_minimum_required(VERSION 3.0)

project(pythagoras)

# Task 1: Create a static library called "pythagoras" that consists
#         of pythagoras.c

# Task 2: Create an executable called "pythagoras" that consists of main.c
# Hint: Two targets can NOT have the same name. Therefore, you
#       can use the following command:
#       set_target_properties(prog_exe PROPERTIES OUTPUT_NAME prog)

# Task 3: Link the pythagoras executable with the pythagoras library
#         and the math library

# Task 4: Install the generated library, its header files,
#         and executable under ${HOME}/bin, ${HOME}/lib, and ${HOME}/include.
#         You can control the install prefix in CMake by setting
#         CMAKE_INSTALL_PREFIX when you call CMake
