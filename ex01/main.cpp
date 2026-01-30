#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void sameIdeas(const Animal *ani1, const Animal *ani2)
{
	for (int i = 0; i < IDEA_COUNT; i++) {
		if (*ani1->getIdea(i) != *ani2->getIdea(i)) {
			std::cout << "NOT sharing same ideas !\n\t";
			std::cout << *ani1->getIdea(i) << "\n\t";
			std::cout << *ani2->getIdea(i) << std::endl;
			return ; 
		}
	}
	std::cout << "Sharing same ideas !" << std::endl;
}

int main(void) {
	Dog dog();
	Cat cat();

	Animal* animals[100];

	std::cout << "DOG:\n";
	for (int i = 0; i < 50; i++)
		animals[i] = new Dog();
	std::cout << "\nCAT:\n";
	for (int i = 50; i < 100; i++)
		animals[i] = new Cat();

	std::cout << "\nCMP:\n";
	*(Dog *)animals[0] = *(Dog *)animals[1];
	std::cout << "Should share same ideas: ";
	sameIdeas(animals[0], animals[1]);
	std::cout << "Should not share same ideas: ";
	sameIdeas(animals[0], animals[2]);

	std::cout << "\nEND:\n";
	for (int i = 0; i < 100; i++)
		delete animals[i];
	return 0;
}
