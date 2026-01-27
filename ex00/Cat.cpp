#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat") {
	std::cout << "(Cat) Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other) {
	std::cout << "(Cat) Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "(Cat) Copy assignment called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "(Cat) Deconstructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
