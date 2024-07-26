#include "Chicken.hpp"

namespace Entity
{
    Chicken::Chicken(const int& Name, const int& Age, const int& Weight,
                     const int& HappyIndex, const int& Price)
        : Animals(Name, Age, Weight, HappyIndex, Price)
    {
    }

    int Chicken::Sound()
    {
        return -1;
    }

    int Chicken::Eat()
    {
        return -1;
    }

    int Chicken::Reproduce()
    {
        return -1;
    }

    int Chicken::GoOut()
    {
        return -1;
    }

    int Chicken::Die()
    {
        return -1;
    }

} // namespace Entity