# tetromino-engine / tetromino-engine
#
# Copyright 2022, ooxi and the tetromino-engine contributors
# SPDX-License-Identifier: Zlib
project("tetromino-engine-tetromino-engine" CXX)
add_library("${PROJECT_NAME}" STATIC)
add_library("tetromino-engine::tetromino-engine" ALIAS "${PROJECT_NAME}")


target_sources(
	"${PROJECT_NAME}"
	PRIVATE
		"${CMAKE_CURRENT_LIST_DIR}/src/TetrominoEngine.c++"
)


target_include_directories(
	"${PROJECT_NAME}"
	PUBLIC
		"${CMAKE_CURRENT_LIST_DIR}/include"
)


target_link_libraries(
	"${PROJECT_NAME}"
	PRIVATE
		tetromino-engine::c++20
)


add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/test/TetrominoEngineTest")
