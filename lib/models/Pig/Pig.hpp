

#ifndef PIG_HPP
#define PIG_HPP
#include "../Animal.hpp"

namespace Entity
{
    class Pig final : public Animals
    {
        public:
            Pig(const int& Name, const int& Age, const int& Weight,
                const int& HappyIndex, const int& Price);
            int Sound() override;
            int Eat() override;
            int Reproduce() override;
            int GoOut() override;
            int Die() override;
    };
} // namespace Entity

#endif // PIG_HPP