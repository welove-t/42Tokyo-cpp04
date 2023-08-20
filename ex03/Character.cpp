#include "Character.hpp"

/* Orthodox Canonical Form */
Character::Character() : _name("")
{
	std::cout << "(Character) Default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const std::string& name): _name(name)
{
	std::cout << "(Character) Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const Character& rhs) : _name(rhs._name)
{
	std::cout << "(Character) Copy Constructor called" << std::endl;
	clearInventory();
	for (int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i] ? rhs._inventory[i]->clone() : nullptr;
}

Character::~Character()
{
	std::cout << "(Character) Destructor called" << std::endl;
	clearInventory();
}

Character& Character::operator=(const Character& rhs)
{
	std::cout << "(Character) Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	clearInventory();
	_name = rhs._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i] ? rhs._inventory[i]->clone() : nullptr;
	return *this;
}

/* Getter */
std::string const &	Character::getName() const
{
	return _name;
}

/* Function */
void	Character::clearInventory(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = nullptr;
		}
	}
}

void 	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			std::cout << GREEN << _name <<  " equipped " << _inventory[i]->getType() << RESET << std::endl;
			return ;
		}
	}
	std::cout << RED << "A lot of belongings !" << RESET << std::endl;
	delete m;
}

void 	Character::unequip(int idx)
{
	if ((0 <= idx && idx < 4) && _inventory[idx])
	{
		std::cout << GREEN << _name <<  " unequipped " << _inventory[idx]->getType() << RESET << std::endl;
		delete _inventory[idx];
		_inventory[idx] = nullptr;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if ((0 <= idx && idx < 4) && _inventory[idx] != nullptr)
		_inventory[idx]->use(target);
}
