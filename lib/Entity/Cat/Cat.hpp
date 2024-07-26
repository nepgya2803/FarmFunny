#ifndef CAT_HPP
#define CAT_HPP
#include "../Animal/Animal.hpp"

namespace Entity
{
    class Cat final : public Animals
    {
        public:
            Cat(const int& Name, const int& Age, const int& Weight,
                const int& HappyIndex, const int& Price);
            int Sound() override;
            int Eat() override;
            int Reproduce() override;
            int GoOut() override;
            int Die() override;
    };
} // namespace Entity

#endif