#include "conio.h"
#include "lib/common/Logger/Logger.hpp"
#include "lib/event_handler/event_controller.hpp"

int Start()
{
    try
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
        return 1;
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
        return 0;
    }
}

int main()
{
    std::cout << "Welcome to the farm" << std::endl;
    std::cout
      << R"(| |  | |      | |                               | |          | |  | |            / _|
| |  | |  ___ | |  ___   ___   _ __ ___    ___  | |_   ___   | |_ | |__    ___  | |_   __ _  _ __  _ __ ___
| |/\| | / _ \| | / __| / _ \ | '_ ` _ \  / _ \ | __| / _ \  | __|| '_ \  / _ \ |  _| / _` || '__|| '_ ` _ \
\  /\  /|  __/| || (__ | (_) || | | | | ||  __/ | |_ | (_) | | |_ | | | ||  __/ | |  | (_| || |   | | | | | |
 \/  \/  \___||_| \___| \___/ |_| |_| |_| \___|  \__| \___/   \__||_| |_| \___| |_|   \__,_||_|   |_| |_| |_|
                                                                                                             )"
      << std::endl;
    int end = 1;
    while (end)
    {
        end = Start();
    }
}