#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): type("DefaultWrongName") {
	std::cout << "(WrongAnimal) Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type): type(type) {
	std::cout << "(WrongAnimal) Typed constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other): type(other.type) {
	std::cout << "(WrongAnimal) Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	std::cout << "(WrongAnimal) Copy assignment called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "(WrongAnimal) Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal doesn't know what to say :(" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return type;
}
