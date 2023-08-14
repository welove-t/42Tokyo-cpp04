#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string idea[100];
	public:
		Brain();
		~Brain();

		Brain(const Brain& rhs);
		Brain& operator=(const Brain& rhs);

		void				setBrain(std::string b);
		const std::string&	getBrain(void) const;

};

#endif
