#include "Animal.hpp"

namespace Entity
{
    Entity::Animals::Animals(const int& Name, const int& Age, const int& Weight,
                             const int& HappyIndex, const int& Price)
    {
        this->Name = Name;
        this->Age = Age;
        this->Weight = Weight;
        this->HappyIndex = HappyIndex;
        this->Price = Price;
    }

} // namespace Entity