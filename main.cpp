#include "lib/common/Logger.hpp"
#include "lib/event_handler/event_controller.hpp"

int main()
{
    std::cout << "Welcome to the farm" << std::endl;
    EventHandler::EventController::InputHandler(EVENT_CANDIDATE::BUY_ANIMAL);
    while (true)
    {
        Logger::LOG("Enter your choice: ");
        Logger::LOG("1. Report all");
        Logger::LOG("2. Report resource");
        Logger::LOG("3. Report animals");
        Logger::LOG("4. Feed animals");
        Logger::LOG("5. Let animals out");
        Logger::LOG("6. Buy animals");
        Logger::LOG("7. Buy food");
        Logger::LOG("8. Sell animals");
        Logger::LOG("9. Quit the game");
    }
}