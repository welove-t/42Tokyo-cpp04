#include "WrongCat.hpp"

/* Orthodox Canonical Form */
WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "(WrongCat) Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs)
{
	type = "WrongCat";
	std::cout << "(WrongCat) Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "(WrongCat) Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if (this == &rhs)
		return *this;
	type = rhs.type;
	std::cout << "(WrongCat) Copy assignment operator called" << std::endl;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "(WrongCat) MeowMeow!!" << std::endl;
}
