#ifndef EVENT_HANDLER_HPP
#define EVENT_HANDLER_HPP
#include "../common/EventCandidate.hpp"
#include "../common/Logger.hpp"
#include <iostream>

namespace EventHandler
{
    class EventController
    {
        public:
            static void InputHander(EVENTCANDIDATE candiate);

        private:
            static void Exit();
    };
} // namespace EventHandler

#endif // EVENT_HANDLER_HPP