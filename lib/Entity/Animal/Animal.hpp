#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

namespace Entity
{
    class Animals
    {
        public:
            Animals(const int& Name, const int& Age, const int& Weight,
                    const int& HappyIndex, const int& Price);

            virtual int Sound();
            virtual int Eat();
            virtual int Reproduce();
            virtual int GoOut();
            virtual int Die();
            virtual ~Animals() = default;

        protected:
            int Name;
            int Age;
            int Weight;
            int HappyIndex;
            int Price;
    };
} // namespace Entity

#endif // ANIMAL_HPP