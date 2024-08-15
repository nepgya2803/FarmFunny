#include "Cat.hpp"

namespace Entity {
	Cat::Cat(const int &Name, const int &Age, const int &Weight, const int &HappyIndex, const int &Price) {
		this->Name       = Name;
		this->Age        = Age;
		this->Weight     = Weight;
		this->HappyIndex = HappyIndex;
		this->Price      = Price;
	}

	int Cat::Sound() {
		return -1;
	}

	int Cat::Eat() {
		return -1;
	}

	int Cat::Reproduce() {
		return -1;
	}

	int Cat::GoOut() {
		return -1;
	}

	int Cat::Die() {
		return -1;
	}

} // namespace Entity