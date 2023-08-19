#include "Ice.hpp"

/* Orthodox Canonical Form */
Ice::Ice() : AMateria("ice")
{
	std::cout << "(Ice) Default constructor called" << std::endl;
}

Ice::Ice(const Ice& rhs) : AMateria(rhs)
{
	std::cout << "(Ice) Copy Constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "(Ice) Destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& rhs)
{
	if (this == &rhs)
		return *this;
	_type = rhs._type;
	std::cout << "(Ice) Copy assignment operator called" << std::endl;
	return *this;
}

/* Function */
AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
