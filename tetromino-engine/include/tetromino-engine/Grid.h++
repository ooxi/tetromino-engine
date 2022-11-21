// Copyright 2022, ooxi and the tetromino-engine contributors
// SPDX-License-Identifier: Zlib
#ifndef HEADER_TETROMINO_ENGINE_GRID
#define HEADER_TETROMINO_ENGINE_GRID


#include <cstddef>


namespace tetromino_engine {

	/**
	 * Basic interface for accessing two dimensional information like the
	 * playfield and tetromino.
	 *
	 * @tparam Cell Cell type
	 * @tparam width Static grid width
	 * @tparam height Static grid height
	 */
	template<typename Cell, std::size_t width, std::size_t height>
	class Grid {
	public:
		virtual ~Grid() = 0;


		[[nodiscard]] constexpr std::size_t getWidth() const {
			return width;
		}

		[[nodiscard]] constexpr std::size_t getHeight() const {
			return height;
		}


		[[nodiscard]] virtual Cell at(std::size_t const x, std::size_t const y) const;
	};
}


#endif
