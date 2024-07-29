

#ifndef DEPRESSFARM_LIB_REPOSITORY_ANIMAL_REPOSITORY_HPP
#define DEPRESSFARM_LIB_REPOSITORY_ANIMAL_REPOSITORY_HPP
#include "../models/Cat/Cat.hpp"
#include "../models/Chicken/Chicken.hpp"
#include "../models/Dog/Dog.hpp"
#include "../models/Pig/Pig.hpp"
#include <vector>

namespace Repository
{
    class AnimalRepository
    {
        private:
            std::vector<Entity::Cat> cats;
            std::vector<Entity::Dog> dogs;
            std::vector<Entity::Chicken> chickens;
            std::vector<Entity::Pig> pigs;

        public:
            template <typename Impl> add()
    };
} // namespace Repository
#endif // DEPRESSFARM_LIB_REPOSITORY_ANIMAL_REPOSITORY_HPP