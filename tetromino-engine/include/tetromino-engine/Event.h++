// Copyright 2022, ooxi and the tetromino-engine contributors
// SPDX-License-Identifier: Zlib
#ifndef HEADER_TETROMINO_ENGINE_EVENT
#define HEADER_TETROMINO_ENGINE_EVENT


#include <tetromino-engine/event/HardDropEvent.h++>
#include <tetromino-engine/event/HoldEvent.h++>
#include <tetromino-engine/event/PauseEvent.h++>
#include <tetromino-engine/event/RotateClockwiseEvent.h++>
#include <tetromino-engine/event/RotateCounterClockwiseEvent.h++>
#include <tetromino-engine/event/ShiftLeftEvent.h++>
#include <tetromino-engine/event/ShiftRightEvent.h++>
#include <tetromino-engine/event/SoftDropEvent.h++>
#include <variant>

namespace tetromino_engine {

	using Event = std::variant<
		tetromino_engine::event::HardDropEvent,
		tetromino_engine::event::HoldEvent,
		tetromino_engine::event::PauseEvent,
		tetromino_engine::event::RotateClockwiseEvent,
		tetromino_engine::event::RotateCounterClockwiseEvent,
		tetromino_engine::event::ShiftLeftEvent,
		tetromino_engine::event::ShiftRightEvent,
		tetromino_engine::event::SoftDropEvent
	>;
}


#endif
