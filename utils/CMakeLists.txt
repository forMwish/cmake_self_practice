add_executable(test ${CMAKE_CURRENT_SOURCE_DIR}/test.c)

target_include_directories( test
    PRIVATE ${CMAKE_SOURCE_DIR}/include
)

target_link_directories( test
    PRIVATE ${LIBRARY_OUTPUT_DIRECTORY}
)

target_link_libraries( test PRIVATE hello)