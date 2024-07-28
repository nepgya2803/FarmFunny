#include "Unit.hpp"

namespace Resource
{
    class Food : public Unit
    {
        public:
            Food(int value) : Unit()
            {
                this->value = value;
            }
    };
} // namespace Resource