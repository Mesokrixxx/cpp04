#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog"), _brain(new Brain) {
	std::cout << "(Dog) Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other), _brain(new Brain(*other._brain)) {
	std::cout << "(Dog) Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		type = other.type;
		
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "(Dog) Copy assignment called" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "(Dog) Destructor called" << std::endl;
}

const std::string *Dog::getIdea(int i) const {
	if (i < 0 || i >= IDEA_COUNT)
		return NULL;
	return &_brain->getIdeas()[i];
}

void Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}
