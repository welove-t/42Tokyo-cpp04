#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

class Animal
{
	private:
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();

		Animal(const Animal& rhs);
		Animal& operator=(const Animal& rhs);
		virtual void	makeSound(void) const = 0;
		const std::string& getType(void) const;

};

#endif
