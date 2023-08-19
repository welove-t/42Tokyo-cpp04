#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria(const AMateria& rhs);
		AMateria& operator=(const AMateria& rhs);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
};

#endif
