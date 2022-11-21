# tetromino-engine
cmake_minimum_required(VERSION 3.14)

project("tetromino-engine")
enable_testing()


# Internal modules
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/c++20")
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/tetromino-engine")
