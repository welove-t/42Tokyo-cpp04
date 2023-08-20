#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"              Create Materia " 			<< std::endl <<
		"------------------------------------------" <<
	RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"              Create Character " 			<< std::endl <<
		"------------------------------------------" <<
	RESET << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               Equip Materia " 			<< std::endl <<
		"------------------------------------------" <<
	RESET << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"               Use Materia " 				<< std::endl <<
		"------------------------------------------" <<
	RESET << std::endl;
	for (int i = 0; i < 5; i++)
		me->use(i, *bob);

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"         UnEquip Materia (idx = 2)" 		<< std::endl <<
		"------------------------------------------" <<
	RESET << std::endl;
	me->unequip(2);

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"         Equip Materia (idx = 2)" 			<< std::endl <<
		"------------------------------------------" <<
	RESET << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"               Use Materia " 				<< std::endl <<
	"------------------------------------------" <<
	RESET << std::endl;
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);

	std::cout << BLUE <<
		"------------------------------------------" << std::endl <<
		"              Delete Instance " 			<< std::endl <<
		"------------------------------------------" <<
	RESET << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
