cmake_minimum_required(VERSION 3.22.1)

project(DepressFarm)

# include_directories(include)
# For Fleet build configuration
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
file(GLOB SOURCES "./main.cpp")

add_executable(source ${SOURCES}
        lib/event_handler/event_controller.hpp
        lib/event_handler/event_controller.cpp
        lib/common/EnumMember/EventCandidate.hpp
        lib/common/Logger/Logger.hpp
        lib/models/Animal.hpp
        lib/models/Chicken/Chicken.hpp
        lib/models/Chicken/Chicken.cpp
        lib/models/Dog/Dog.hpp
        lib/models/Dog/Dog.cpp
        lib/models/Cat/Cat.hpp
        lib/models/Cat/Cat.cpp
        lib/models/Pig/Pig.hpp
        lib/models/Pig/Pig.cpp
        lib/resource/Unit.hpp
        lib/resource/Food.cpp
        lib/resource/Money.cpp
        lib/action/basic_action.hpp
        lib/action/basic_action.cpp
        lib/repository/animal_repository.hpp
)