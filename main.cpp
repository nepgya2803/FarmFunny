#include "conio.h"
#include "lib/common/Logger/Logger.hpp"
#include "lib/event_handler/event_controller.hpp"

int main()
{
    std::cout << "Welcome to the farm" << std::endl;

    while (true)
    {
        Logger::LogInfo("Enter your choice: ");
        Logger::LogInfo("1. Report all");
        Logger::LogInfo("2. Report resource");
        Logger::LogInfo("3. Report animals");
        Logger::LogInfo("4. Feed animals");
        Logger::LogInfo("5. Let animals out");
        Logger::LogInfo("6. Buy animals");
        Logger::LogInfo("7. Buy food");
        Logger::LogInfo("8. Sell animals");
        Logger::LogInfo("9. Quit the game");
        EventHandler::EventController::InputHandler(
          static_cast<EVENT_CANDIDATE>(_getch() - '0'));
    }
}