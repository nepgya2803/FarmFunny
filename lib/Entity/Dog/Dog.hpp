

#ifndef DOG_HPP
#define DOG_HPP
#include "../Animal/Animal.hpp"

namespace Entity
{
    class Dog final : public Animals
    {
        public:
            int IntelligentIndex;

            Dog(const int& Name, const int& Age, const int& Weight,
                const int& HappyIndex, const int& IntelligentIndex,
                const int& Price);
            int Sound() override;
            int Eat() override;
            int Reproduce() override;
            int GoOut() override;
            int Die() override;
            int Train();
    };
} // namespace Entity

#endif // DOG_HPP