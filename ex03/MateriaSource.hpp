#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_materias[4];
		void		clearMaterias(void);
	public:
		MateriaSource();
		~MateriaSource();

		MateriaSource(const MateriaSource& rhs);
		MateriaSource& operator=(const MateriaSource& rhs);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
