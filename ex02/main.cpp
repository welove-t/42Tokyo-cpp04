#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               Normal Animal " 			<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Constract----- " << RESET << std::endl;
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
    // meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << YELLOW << "----- destruct----- " << RESET << std::endl;
	// delete	meta;
	delete	j;
	delete	i;
	return	0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
