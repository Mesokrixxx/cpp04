#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void) {
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << meta->getType() << '\n';
	std::cout << j->getType() << '\n';
	std::cout << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "Wrong ones:\n";
	std::cout << wmeta->getType() << "\n";
	std::cout << wi->getType() << "\n";
	wmeta->makeSound();
	wi->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wi;
	return 0;
}
