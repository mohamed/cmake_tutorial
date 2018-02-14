project(hello)
add_executable(hello hello.c)

# Task 1: Build the project using the "classical" flow. That is:
# > mkdir build
# > cd build
# > cmake ..
# > make

# Task 2: Cleanup the build tree by doing rm -rf * inside it

# Task 3: Re-run cmake with the following and find the compile flags:
# > cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..
# > make VERBOSE=1

# Task 4: Re-run cmake with the following and find the compile flags:
# > cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release ..
# > make VERBOSE=1

# Task 5: Re-run cmake with:
# > cmake -G Ninja -DCMAKE_BUILD_TYPE=Debug ..
# > ninja -v
# For those who do not know Ninja, check out: https://ninja-build.org/

# Task 6: Re-run cmake with:
# > cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ..
# > ninja -v
