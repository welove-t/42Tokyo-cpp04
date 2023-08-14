#include "Cat.hpp"

/* Orthodox Canonical Form */
Cat::Cat():Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "(Cat) Default constructor called" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{
	type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	std::cout << "(Cat) Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "(Cat) Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this == &rhs)
		return *this;
	type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	std::cout << "(Cat) Copy assignment operator called" << std::endl;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "(Cat) MeowMeow!!" << std::endl;
}
