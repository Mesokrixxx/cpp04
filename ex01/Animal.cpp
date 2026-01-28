#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("UndefinedAnimal") {
	std::cout << "(Animal) Default constructor called" << std::endl;
}

Animal::Animal(const std::string& type): type(type) {
	std::cout << "(Animal) Type defined constructor called" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type) {
	std::cout << "(Animal) Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "(Animal) Copy Assignment called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "(Animal) Deconstructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal doesn't know what to say :(" << std::endl;
}

const std::string& Animal::getType() const {
	return type;
}
