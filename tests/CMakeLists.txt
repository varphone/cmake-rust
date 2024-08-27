find_package(Catch2 CONFIG REQUIRED)

include(Catch)

add_executable(tests
    test-bar.cpp
    test-foo.cpp
)

target_link_libraries(tests
    PRIVATE
        bar::bar
        foo::foo
        Catch2::Catch2
        Catch2::Catch2WithMain
)

if(WIN32)
    add_custom_command(TARGET tests POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy -t $<TARGET_FILE_DIR:tests> $<TARGET_RUNTIME_DLLS:tests>
        COMMAND_EXPAND_LISTS
    )
endif()

catch_discover_tests(tests)
