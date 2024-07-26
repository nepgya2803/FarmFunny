#include "Dog.hpp"

namespace Entity
{
    Dog::Dog(const int& Name, const int& Age, const int& Weight,
             const int& HappyIndex, const int& IntelligentIndex,
             const int& Price)
        : Animals(Name, Age, Weight, HappyIndex, Price)
    {
        this->IntelligentIndex = IntelligentIndex;
    }

    int Dog::Sound()
    {
        return -1;
    }

    int Dog::Eat()
    {
        return -1;
    }

    int Dog::Reproduce()
    {
        return -1;
    }

    int Dog::GoOut()
    {
        return -1;
    }

    int Dog::Die()
    {
        return -1;
    }

    int Dog::Train()
    {
        return -1;
    }
} // namespace Entity