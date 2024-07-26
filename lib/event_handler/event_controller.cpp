#include "event_controller.hpp"

void EventHandler::EventController::InputHandler(EVENT_CANDIDATE candidate)
{
    {
        switch (candidate)
        {
        case REPORT_ALL:
            Logger::LogInfo("Displaying all resource");
            // TODO: Report all animal resource information
            break;

        case REPORT_RESOURCE:
            // TODO: Report only resource
            break;

        case REPORT_ANIMAL:
            // TODO: Only report animal information
            break;

        case FEED_ANIMAL:
            // TODO: Feed the animals
            break;

        case LET_ANIMAL_OUT:
            // TODO: Let the animals out
            break;

        case BUY_ANIMAL:
            // TODO: buy an animals
            break;

        case BUY_FOOD:
            // TODO: Buy a food
            break;

        case SELL_ANIMAL:
            // TODO: Sell an animals
            break;

        case QUIT:
            // TODO: terminate the program. Save all progress
            Logger::LogInfo("Thank for playing! No joke");
            Exit();
            break;

        default:
            // TODO: resolve user input
            break;
        }
    }
}

void EventHandler::EventController::Exit()
{
    // TODO: suppose to save the progress

    // TODO: suppose to quit the program
    std::exit(0);
}