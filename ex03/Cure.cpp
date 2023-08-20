#include "Cure.hpp"

/* Orthodox Canonical Form */
Cure::Cure() : AMateria("cure")
{
	std::cout << "(Cure) Default constructor called" << std::endl;
}

Cure::Cure(const Cure& rhs) : AMateria(rhs)
{
	std::cout << "(Cure) Copy Constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "(Cure) Destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& rhs)
{
	if (this == &rhs)
		return *this;
	_type = rhs._type;
	std::cout << "(Cure) Copy assignment operator called" << std::endl;
	return *this;
}

/* Function */
AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << GREEN << "* heals " << target.getName() << "\'s wounds *" << RESET << std::endl;
}
