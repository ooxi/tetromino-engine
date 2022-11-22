// Copyright 2022, ooxi and the tetromino-engine contributors
// SPDX-License-Identifier: Zlib
#ifndef HEADER_TETROMINO_ENGINE_TETROMINO_CELL
#define HEADER_TETROMINO_ENGINE_TETROMINO_CELL


#include <tetromino-engine/tetromino/CellFree.h++>
#include <tetromino-engine/tetromino/CellOccupied.h++>
#include <variant>


namespace tetromino_engine::tetromino {

	using Cell = std::variant<
		CellFree,
		CellOccupied
	>;
}


#endif
