# SET(COVERAGE OFF CACHE BOOL "Coverage")
# 
# if (COVERAGE)
# 	target_compile_options(tests PRIVATE --coverage)
# 	target_link_libraries(tests PRIVATE --coverage)
# endif()
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/CMakeModules)
message(STATUS ${CMAKE_MODULE_PATH})


if(CMAKE_COMPILER_IS_GNUCXX)
    include(CodeCoverage)
    setup_target_for_coverage(${PROJECT_NAME}_coverage test_all coverage)
endif()


include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_BINARY_DIR})

add_subdirectory(common)

add_subdirectory(apps)
add_subdirectory(tests)
