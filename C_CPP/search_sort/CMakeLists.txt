cmake_minimum_required(VERSION 3.0.0)
project(cpp_test VERSION 0.1.0)

include(CTest)
enable_testing()

set (
    SRC_FILES main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/algsort.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/algsearch.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/common.cpp
    ) # your source files

add_executable(cpp_test ${SRC_FILES}) # build executable "sample"
include_directories("${PROJECT_SOURCE_DIR}/include")


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
