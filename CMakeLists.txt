cmake_minimum_required(VERSION 3.19)

project(cmake-rust)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set(CMAKE_VERBOSE_MAKEFILE ON)

option(BUILD_DOCS "Build with documents" OFF)
option(BUILD_EXAMPLES "Build with examples" OFF)
option(BUILD_SHARED_LIBS "Build shared libraries" ON)

include(CTest)
enable_testing()

include(GNUInstallDirs)
include(RustCrate)

add_subdirectory(crates)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()

if(WIN32)
    set(CPACK_GENERATOR NSIS ZIP)
endif()

include(CPack)
