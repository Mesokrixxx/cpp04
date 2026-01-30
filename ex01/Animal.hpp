#pragma once

#include <string>

class Animal {
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();
	
	virtual const std::string *getIdea(int i) const;
	virtual void makeSound() const;
	const std::string& getType() const;

protected:
	std::string type;

};
