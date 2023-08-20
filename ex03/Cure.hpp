#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure :public AMateria
{
	private:
	public:
		Cure();
		~Cure();

		Cure(const Cure& rhs);
		Cure& operator=(const Cure& rhs);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
