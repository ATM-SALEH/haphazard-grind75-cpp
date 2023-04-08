cmake_minimum_required(VERSION 3.20)
project(grind75 LANGUAGES C CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(tdps/google-test)

enable_testing()

add_subdirectory(src)