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
	const Animal* dog = new Dog();
	delete dog;

	return	0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
