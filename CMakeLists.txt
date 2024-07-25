cmake_minimum_required(VERSION 3.22.1)

project(DepressFarm)

# include_directories(include)

file(GLOB SOURCES "./main.cpp")

add_executable(source ${SOURCES}
        lib/event_handler/event_controller.hpp
        lib/event_handler/event_controller.cpp
        lib/common/EventCandidate.hpp
        lib/common/Logger.hpp
        lib/common/Logger.cpp)