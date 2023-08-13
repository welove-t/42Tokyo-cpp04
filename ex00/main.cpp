#include "Animal.hpp"
#include "Dog.hpp"

int main( void )
{
	// Animal animal;
	const Animal* meta = new Animal();
	const Dog* i = new Dog();
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	// dog.makeSound();

	delete meta;
	std::cout << "meta delete done" << std::endl;
	delete i;
	return 0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
