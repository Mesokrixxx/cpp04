#include "Brain.hpp"
#include <iostream>

const std::string IDEAS[] = {
	"Im so hungry",
	"Im so thirsty",
	"Just lemme eat :(",
	"Man i love food",
	"Did i see food",
	"Food..",
	"I wonder what i'll eat tonight",
	"Just give me food already",
	"Bro i hate being hungry",
	"Im gonna eat my own hands if this continue",
	"Just give me like, one nugget",
	"Are those people eating",
	"Food :)"
};

const std::string& Brain::_newIdea() {
	static int index;

	if (index >= (int)(sizeof(IDEAS) / sizeof(IDEAS[0])))
		index = 0;
	return IDEAS[index++];
}

Brain::Brain() {
	for (int i = 0; i < IDEA_COUNT; i++) {
		_ideas[i] = _newIdea();
	}
	std::cout << "(Brain) Default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	for (int i = 0; i < IDEA_COUNT; i++) {
		_ideas[i] = other._ideas[i];
	}
	std::cout << "(Brain) Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < IDEA_COUNT; i++) {
			_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "(Brain) Copy assignment called" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "(Brain) Destructor called" << std::endl;
}

const std::string* Brain::getIdeas() const {
	return _ideas;
}
