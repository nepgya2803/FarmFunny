#include "Pig.hpp"

namespace Entity
{
    Pig::Pig(const int& Name, const int& Age, const int& Weight,
             const int& HappyIndex, const int& Price)
    {
        this->Name = Name;
        this->Age = Age;
        this->Weight = Weight;
        this->HappyIndex = HappyIndex;
        this->Price = Price;
    }

    int Pig::Sound()
    {
        return -1;
    }

    int Pig::Eat()
    {
        return -1;
    }

    int Pig::Reproduce()
    {
        return -1;
    }

    int Pig::GoOut()
    {
        return -1;
    }

    int Pig::Die()
    {
        return -1;
    }
} // namespace Entity