add_executable(test "./test.c")

target_include_directories( test
    PRIVATE "./include"
)

target_link_directories( test
    PRIVATE "./output/lib"
)

target_link_libraries( test PRIVATE hello)