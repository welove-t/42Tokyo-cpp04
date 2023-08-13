#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog :public Animal
{
	private:
	protected:
	public:
		Dog();
		~Dog();

		Dog(const Dog& rhs);
		Dog& operator=(const Dog& rhs);
};

#endif
