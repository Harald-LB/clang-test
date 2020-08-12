cmake_minimum_required(VERSION 3.16)
project(clang_test)

# please note,  in `Settings -> Build, Execution, Deployment > CMake` we have set the `CMake options` to:
# -DCMAKE_CXX_COMPILER=/usr/bin/clang++ -DCMAKE_C_COMPILER=/usr/bin/clang -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

set(CMAKE_CXX_STANDARD 17)

add_executable(clang_test main.cpp)

