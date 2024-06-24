cmake_minimum_required(VERSION 3.28)
project(project)

set(CMAKE_CXX_STANDARD 17)

# Copy file CS210_Project_Three_Input_File.txt to output directory
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/CS210_Project_Three_Input_File.txt ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

add_executable(project main.cpp)
