#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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
