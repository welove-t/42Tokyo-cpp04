#include "Animal.hpp"
#include "Dog.hpp"

int main( void )
{
	// Animal animal;
	const Animal* meta = new Animal();
	Dog	dog;
	meta->makeSound();
	dog.makeSound();

	return 0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
