cmake_minimum_required(VERSION 3.22.1)

project(DepressFarm)

# include_directories(include)

file(GLOB SOURCES "./main.cpp")

add_executable(source ${SOURCES}
        lib/event_handler/event_controller.hpp
        lib/event_handler/event_controller.cpp
        lib/common/EnumMember/EventCandidate.hpp
        lib/common/Logger/Logger.hpp
        lib/Entity/Animal/Animal.hpp
        lib/Entity/Animal/Animals.cpp
        lib/Entity/Chicken/Chicken.hpp
        lib/Entity/Chicken/Chicken.cpp
        lib/Entity/Dog/Dog.hpp
        lib/Entity/Dog/Dog.cpp
        lib/Entity/Cat/Cat.hpp
        lib/Entity/Cat/Cat.cpp
        lib/Entity/Pig/Pig.hpp
        lib/Entity/Pig/Pig.cpp
)