cmake_minimum_required(VERSION 3.7)
project(UnitTestTemplate)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)


set(SOURCE_FILES main.cpp tests/YourClass.h tests/test.cpp)
add_executable(UnitTestTemplate ${SOURCE_FILES} tests/YourClass.h tests/test.cpp)
target_link_libraries(UnitTestTemplate gtest gtest_main)
