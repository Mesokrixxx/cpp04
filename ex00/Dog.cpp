#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog") {
	std::cout << "(Dog) Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other) {
	std::cout << "(Dog) Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "(Dog) Copy assignment called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "(Dog) Deconstructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}
