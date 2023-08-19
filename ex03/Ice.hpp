#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice :public AMateria
{
	private:
	public:
		Ice();
		~Ice();

		Ice(const Ice& rhs);
		Ice& operator=(const Ice& rhs);

		AMateria*	clone() const = 0;
		void		use(ICharacter& target);
};

#endif
