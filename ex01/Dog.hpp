#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();

	const std::string *getIdea(int i) const;
	void makeSound() const;

private:
	Brain *_brain;
};