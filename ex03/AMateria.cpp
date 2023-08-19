#include "AMateria.hpp"

/* Orthodox Canonical Form */
AMateria::AMateria()
{
	std::cout << "(AMateria) Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout << "(AMateria) Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& rhs) : _type(rhs._type)
{
	std::cout << "(AMateria) Copy Constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "(AMateria) Destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this == &rhs)
		return *this;
	_type = rhs._type;
	std::cout << "(AMateria) Copy assignment operator called" << std::endl;
	return *this;
}

/* Getter */
std::string const & AMateria::getType() const
{
	return _type;
}
