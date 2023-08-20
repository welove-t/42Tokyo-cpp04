#include "MateriaSource.hpp"

/* Orthodox Canonical Form */
MateriaSource::MateriaSource()
{
	std::cout << "(MateriaSource) Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& rhs)
{
	std::cout << "(MateriaSource) Copy Constructor called" << std::endl;
	clearMaterias();
	for (int i = 0; i < 4; i++)
		_materias[i] = rhs._materias[i] ? rhs._materias[i]->clone() : nullptr;
}

MateriaSource::~MateriaSource()
{
	std::cout << "(MateriaSource) Destructor called" << std::endl;
	clearMaterias();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	std::cout << "(MateriaSource) Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	clearMaterias();
	for (int i = 0; i < 4; i++)
		_materias[i] = rhs._materias[i] ? rhs._materias[i]->clone() : nullptr;
	return *this;
}

/* Function */
void	MateriaSource::clearMaterias(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
		{
			delete _materias[i];
			_materias[i] = nullptr;
		}
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return nullptr;
}
