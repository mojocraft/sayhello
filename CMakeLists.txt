cmake_minimum_required(VERSION 3.5)

project(hello)

set(SRC_FILES ${CMAKE_SOURCE_DIR}/test.c)
#aux_source_directory(${CMAKE_SOURCE_DIR}/ SRC_FILES)

add_executable(hello ${SRC_FILES})
