cmake_minimum_required(VERSION 3.0.0)
project(test_project VERSION 0.1.0)

include(CTest)
enable_testing()

aux_source_directory(source DIR_SRCS)
set(TESTVAR ${DIR_SRCS})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


add_executable(test_project main.cpp ${TESTVAR})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
