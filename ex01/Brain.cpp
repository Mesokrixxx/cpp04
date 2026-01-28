#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	for (int i = 0; i < IDEA_COUNT; i++) {

	}
	std::cout << "(Brain) Default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < IDEA_COUNT; i++) {

	}
	std::cout << "(Brain) Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {

	}
	std::cout << "(Brain) Copy assignment called" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "(Brain) Destructor called" << std::endl;
}
