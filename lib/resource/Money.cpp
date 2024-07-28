#include "Unit.hpp"

namespace Resource
{
    class Money : public Unit
    {
        public:
            Money(int value) : Unit()
            {
                this->value = value;
            }
    };
} // namespace Resource