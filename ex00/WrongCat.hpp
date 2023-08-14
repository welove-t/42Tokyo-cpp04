#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat :public WrongAnimal
{
	private:
	protected:
	public:
		WrongCat();
		~WrongCat();

		WrongCat(const WrongCat& rhs);
		WrongCat& operator=(const WrongCat& rhs);

		void	makeSound(void) const;
};

#endif
