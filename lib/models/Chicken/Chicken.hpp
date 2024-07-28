#ifndef CHICKEN_HPP
#define CHICKEN_HPP
#include "../Animal.hpp"

namespace Entity
{
    class Chicken final : public Animals
    {
        public:
            Chicken(const int& Name, const int& Age, const int& Weight,
                    const int& HappyIndex, const int& Price);
            int Sound() override;
            int Eat() override;
            int Reproduce() override;
            int GoOut() override;
            int Die() override;
    };
} // namespace Entity

#endif // CHICKEN_HPP