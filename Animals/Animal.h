#include "action.h"

#ifdef ANIMAL_H
#define ANIMAL_H

namespace Animals {
    class AnimalEntity {
        public:
            std::string Name;
            int Age;
            int Weight;
            int Happy_index;
            int Intelligent_index;
            int Price;
            int Actions;
            Action action;
    }
} // namespace Animals

#endif