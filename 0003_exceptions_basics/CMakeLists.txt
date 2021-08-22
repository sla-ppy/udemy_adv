cmake_minimum_required(VERSION 3.19)
project(0003_exceptions_basics)

set(CMAKE_CXX_STANDARD 17)

# where -Wall -Wextra -Wpedantic are extra compiler warnings
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -lpanel")

add_executable(0003_exceptions_basics main.cpp)
