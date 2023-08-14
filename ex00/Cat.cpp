#include "Cat.hpp"

/* Orthodox Canonical Form */
Cat::Cat():Animal("Cat")
{
	std::cout << "(Cat) Default constructor called" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{
	type = rhs.type;
	std::cout << "(Cat) Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "(Cat) Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this == &rhs)
		return *this;
	type = rhs.type;
	std::cout << "(Cat) Copy assignment operator called" << std::endl;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "(Cat) MeowMeow!!" << std::endl;
}
