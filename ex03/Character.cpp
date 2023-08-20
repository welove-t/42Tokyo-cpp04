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
	for (int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i] ? rhs._inventory[i]->clone() : nullptr;
}

Character::~Character()
{
	std::cout << "(Character) Destructor called" << std::endl;
}

Character& Character::operator=(const Character& rhs)
{
	std::cout << "(Character) Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = rhs._inventory[i] ? rhs._inventory[i]->clone() : nullptr;
	return *this;
}

/* Function */
