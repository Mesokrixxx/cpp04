#pragma once

#include <string>

#define IDEA_COUNT 100

class Brain {
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

private:
	std::string _ideas[IDEA_COUNT];
};
