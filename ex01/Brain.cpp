#include "Brain.hpp"

/* Orthodox Canonical Form */
Brain::Brain()
{
	std::cout << "(Brain) Default constructor called" << std::endl;
}

Brain::Brain(const Brain& rhs)
{
	for (int i = 0; i < 100; i++)
		this->idea[i] = rhs.idea[i];
	std::cout << "(Brain) Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "(Brain) Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 100; i++)
		this->idea[i] = rhs.idea[i];
	std::cout << "(Brain) Copy assignment operator called" << std::endl;
	return *this;
}

void	Brain::setBrain(std::string b)
{
	for (int i = 0; i < 100; i++)
		this->idea[i] = b;
}

const std::string&	Brain::getBrain(void) const
{
	return this->idea[0];
}
