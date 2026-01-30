#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(): type("UndefinedAnimal") {
	std::cout << "(Animal) Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& type): type(type) {
	std::cout << "(Animal) Type defined constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other): type(other.type) {
	std::cout << "(Animal) Copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << "(Animal) Copy Assignment called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "(Animal) Destructor called" << std::endl;
}

const std::string *AAnimal::getIdea(int i) const {
	(void)i;
	return NULL;
}

void AAnimal::makeSound() const {
	std::cout << "Animal doesn't know what to say :(" << std::endl;
}

const std::string& AAnimal::getType() const {
	return type;
}
