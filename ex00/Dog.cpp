#include "Dog.hpp"

/* Orthodox Canonical Form */
Dog::Dog()
{
	type = "Dog";
	std::cout << "(Dog) Default constructor called" << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
	type = "Dog";
	std::cout << "(Dog) Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
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
