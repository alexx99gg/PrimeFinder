cmake_minimum_required(VERSION 3.17)
project(prime_race)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
add_executable(prime_race src/main.cpp src/lib/PrimeFinder.h src/lib/PrimeFinder.cpp)