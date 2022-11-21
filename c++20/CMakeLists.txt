# tetromino-engine / c++20
#
# Copyright 2022, ooxi and the tetromino-engine contributors
# SPDX-License-Identifier: Zlib
project("tetromino-engine-c++20" CXX)
add_library("${PROJECT_NAME}" INTERFACE)
add_library("tetromino-engine::c++20" ALIAS "${PROJECT_NAME}")


target_compile_options(
	"${PROJECT_NAME}"
	INTERFACE
		-std=c++20

		-Wall
		-Wextra
		-Werror
		-Wpedantic

		-Wnon-virtual-dtor
		-Wcast-align
		-Wunused
		-Woverloaded-virtual
		-Wdouble-promotion
		-Wformat=2
)


# @warning Must be exhausive to make sure we do not miss used compilers
if ("GNU" STREQUAL "${CMAKE_CXX_COMPILER_ID}")
	target_compile_options(
		"${PROJECT_NAME}"
		INTERFACE
			-Wlogical-op
			-Wmisleading-indentation
			-Wduplicated-cond
			-Wduplicated-branches
	)

elseif ("Clang" STREQUAL "${CMAKE_CXX_COMPILER_ID}")
	# NOP

else()
	message(FATAL_ERROR "[tetromino-engine::c++20] Unsupported compiler `${CMAKE_CXX_COMPILER_ID}'")
endif()
