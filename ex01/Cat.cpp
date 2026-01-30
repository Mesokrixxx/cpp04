#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat"), _brain(new Brain) {
	std::cout << "(Cat) Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other): Animal(other), _brain(new Brain(*other._brain)) {
	std::cout << "(Cat) Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		type = other.type;

		delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "(Cat) Copy assignment called" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "(Cat) Destructor called" << std::endl;
}

const std::string *Cat::getIdea(int i) const {
	if (i < 0 || i >= IDEA_COUNT)
		return NULL;
	return &_brain->getIdeas()[i];
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}
