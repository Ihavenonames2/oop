cmake_minimum_required(VERSION 3.0)

set(PROJECT_NAME healthyLib)

project(${PROJECT_NAME} VERSION 1.0)

set( CMAKE_CXX_STANDARD 20 )
set( CMAKE_CXX_STANDARD_REQUIRED true )

add_subdirectory(lib/healthy)
add_subdirectory(lib/main)
