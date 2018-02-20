SET(COVERAGE OFF CACHE BOOL "Coverage")

if (COVERAGE)
	target_compile_options(tests PRIVATE --coverage)
	target_link_libraries(tests PRIVATE --coverage)
endif()

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_BINARY_DIR})

add_subdirectory(common)

add_subdirectory(apps)
add_subdirectory(tests)
