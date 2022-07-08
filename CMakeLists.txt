cmake_minimum_required(VERSION 3.22)
project(spaceSimulation VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.5.1
)
FetchContent_MakeAvailable(SFML)

add_subdirectory(src)

add_executable(spaceSimulation main.cpp)
target_link_libraries(spaceSimulation sfml-graphics)
