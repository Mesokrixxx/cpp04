#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();

	const std::string *getIdea(int i) const;
	void makeSound() const;

private:
	Brain *_brain;
};
