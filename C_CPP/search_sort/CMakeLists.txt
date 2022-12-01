cmake_minimum_required(VERSION 3.0.0)
project(harvard VERSION 0.1.0)

include(CTest)
enable_testing()

set (SRC_FILES main.c ${CMAKE_CURRENT_SOURCE_DIR}/src/algsort.c) # your source files

add_executable(harvard ${SRC_FILES}) # build executable "sample"
include_directories("${PROJECT_SOURCE_DIR}/include")


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
