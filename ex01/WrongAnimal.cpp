#include "WrongAnimal.hpp"

/* Orthodox Canonical Form */
WrongAnimal::WrongAnimal()
{
	std::cout << "(WrongAnimal) Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
	std::cout << "(WrongAnimal) Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs) : type(rhs.type)
{
	std::cout << "(WrongAnimal) Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "(WrongAnimal) Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this == &rhs)
		return *this;
	type = rhs.type;
	std::cout << "(WrongAnimal) Copy assignment operator called" << std::endl;
	return *this;
}

/* Function */
void	WrongAnimal::makeSound(void) const
{
	std::cout << "(WrongAnimal) ...hoge " << std::endl;
}

const std::string& WrongAnimal::getType(void) const
{
	return type;
}
