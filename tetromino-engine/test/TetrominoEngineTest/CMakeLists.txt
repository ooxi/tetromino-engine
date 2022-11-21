# tetromino-engine / tetromino-engine / test / TetrominoEngineTest
project("${PROJECT_NAME}-TetrominoEngineTest" CXX)
add_executable("${PROJECT_NAME}")


target_sources(
	"${PROJECT_NAME}"
	PRIVATE
		"${CMAKE_CURRENT_LIST_DIR}/TetrominoEngineTest.c++"
)


target_link_libraries(
	"${PROJECT_NAME}"
	PUBLIC
		tetromino-engine::tetromino-engine
	PRIVATE
		tetromino-engine::c++20
)


add_test(
	NAME	"${PROJECT_NAME}"
	COMMAND	"${PROJECT_NAME}"
)
