#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

namespace Entity
{
    class Animals
    {
        public:
            Animals() = default;
            virtual ~Animals() = default;
            virtual int Sound() = 0;
            virtual int Eat() = 0;
            virtual int Reproduce() = 0;
            virtual int GoOut() = 0;
            virtual int Die() = 0;

        protected:
            int Name;
            int Age;
            int Weight;
            int HappyIndex;
            int Price;
    };
} // namespace Entity

#endif // ANIMAL_HPP