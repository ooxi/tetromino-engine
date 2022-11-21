// Copyright 2022, ooxi and the tetromino-engine contributors
// SPDX-License-Identifier: Zlib
#ifndef HEADER_TETROMINO_ENGINE_TETROMINO
#define HEADER_TETROMINO_ENGINE_TETROMINO


#include <cstddef>
#include <tetromino-engine/Grid.h++>
#include <tetromino-engine/TetrominoCell.h++>


namespace tetromino_engine {

	template<typename Self, std::size_t width, std::size_t height>
	class Tetromino : public Grid<TetrominoCell, width, height> {
	public:
		virtual ~Tetromino() = 0;

		[[nodiscard]] virtual Self rotateClockwise() const = 0;
		[[nodiscard]] virtual Self rotateCounterClockwise() const = 0;
	};
}


#endif
