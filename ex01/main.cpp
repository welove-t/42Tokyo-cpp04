#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main( void )
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               single test " 			<< std::endl <<
		"------------------------------------------" << std::endl <<

	RESET << std::endl;

	std::cout << GREEN << "----- Constract----- " << RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	delete j;
	delete i;

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"                multi test "	 			<< std::endl <<
	"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Constract----- " << RESET << std::endl;
	const Animal* animals[6] =
	{
		new Dog(), new Dog(), new Dog(),
		new Cat(), new Cat(), new Cat(),
	};

	std::cout << GREEN << "----- MakeSound----- " << RESET << std::endl;
	for (int i =0; i < 6; i++)
		animals[i]->makeSound();

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << i + 1 << std::endl;
		delete animals[i];
	}

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               copy test " 				<< std::endl <<
		"------------------------------------------" << std::endl <<
	RESET << std::endl;

	std::cout << GREEN << "----- Constract----- " << RESET << std::endl;
	Dog dog;
	Dog copyDog = dog;
	Cat cat;
	Cat copyCat = cat;

	std::cout << YELLOW << "----- Destruct----- " << RESET << std::endl;
	return	0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
