#include "Dog.hpp"

/* Orthodox Canonical Form */
Dog::Dog():Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "(Dog) Default constructor called" << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
	type = rhs.type;
	std::cout << "(Dog) Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "(Dog) Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this == &rhs)
		return *this;
	type = rhs.type;
	std::cout << "(Dog) Copy assignment operator called" << std::endl;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "(Dog) BowWow!!" << std::endl;
}
