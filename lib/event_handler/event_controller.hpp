#ifndef EVENT_HANDLER_HPP
#define EVENT_HANDLER_HPP
#include "../common/EnumMember/EventCandidate.hpp"
#include "../common/Logger/Logger.hpp"

namespace EventHandler
{
    class EventController
    {
        public:
            static void InputHandler(EVENT_CANDIDATE candidate);

        private:
            static void Exit();
    };
} // namespace EventHandler

#endif // EVENT_HANDLER_HPP