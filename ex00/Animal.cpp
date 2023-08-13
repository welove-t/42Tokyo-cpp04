#include "Animal.hpp"

/* Orthodox Canonical Form */
Animal::Animal()
{
	std::cout << "(Animal) Default Constructor called" << std::endl;
}

Animal::Animal(std::string type):type(type)
{
	std::cout << "(Animal) Constructor called" << std::endl;
}

Animal::Animal(const Animal& rhs) : type(rhs.type)
{
	std::cout << "(Animal) Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "(Animal) Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this == &rhs)
		return *this;
	type = rhs.type;
	std::cout << "(Animal) Copy assignment operator called" << std::endl;
	return *this;
}

/* Function */
void	Animal::makeSound(void) const
{
	std::cout << "(Animal) ...hoge " << std::endl;
}
