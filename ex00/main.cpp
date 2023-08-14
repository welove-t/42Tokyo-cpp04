#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               Normal Animal " 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
	j->makeSound();
	i->makeSound();

	delete	meta;
	delete	j;
	delete	i;

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"                Wrong Animal " 			<< std::endl <<
	"------------------------------------------" << std::endl <<
	RESET << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
    wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete	wrongAnimal;
	delete	wrongCat;
	return	0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
