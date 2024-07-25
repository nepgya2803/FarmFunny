#include "lib/common/Logger.hpp"
#include "lib/event_handler/event_controller.hpp"
#include <conio.h>
#include <iostream>

int main()
{
    std::cout << "Welcome to the farm" << std::endl;
    while (true)
    {
        LOG("Enter your choice: ");
        LOG("1. Report all");
        LOG("2. Report resource");
        LOG("3. Report animals");
        LOG("4. Feed animals");
        LOG("5. Let animals out");
        LOG("6. Buy animals");
        LOG("7. Buy food");
        LOG("8. Sell animals");
        LOG("9. Quit the game");
        EventHandler::EventController::InputHander(
          static_cast<EVENTCANDIDATE>(_getch() - '0'));
    }
}