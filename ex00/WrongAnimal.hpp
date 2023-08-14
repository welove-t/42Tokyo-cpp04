#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

class WrongAnimal
{
	private:
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();

		WrongAnimal(const WrongAnimal& rhs);
		WrongAnimal& operator=(const WrongAnimal& rhs);
		void	makeSound(void) const;
		const std::string& getType(void) const;

};

#endif
