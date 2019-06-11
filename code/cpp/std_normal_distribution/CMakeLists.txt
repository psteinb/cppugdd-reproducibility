cmake_minimum_required(VERSION 3.5)

project(test_std_normal LANGUAGES CXX VERSION 0.0.1 )
set(CXX_STANDARD 17)

# Prepare "Catch" library for other executables
set(CATCH_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include/extern)
add_library(Catch2::Catch IMPORTED INTERFACE)
set_property(TARGET Catch2::Catch APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES "${CATCH_INCLUDE_DIR}")

add_executable(test_std_normal test_std_normal.cpp)
target_link_libraries(test_std_normal Catch2::Catch)

include(CTest)
add_test(NAME test_std_normal COMMAND test_std_normal)
