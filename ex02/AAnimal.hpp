#pragma once

#include <string>

class AAnimal {
public:
	AAnimal();
	AAnimal(const std::string& type);
	AAnimal(const AAnimal& other);
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal();
	
	virtual const std::string *getIdea(int i) const;
	virtual void makeSound() const = 0;
	const std::string& getType() const;

protected:
	std::string type;

};
