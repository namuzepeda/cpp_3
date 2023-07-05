#include "FragTrap.hpp"

void	first_rundown(void)
{
	FragTrap alice("Alice");

	alice.attack("Bob");
	alice.attack("Chris");
	alice.attack("Diana");
	alice.attack("Elisa");
	alice.attack("Fred");
	alice.attack("Gemma");
	alice.attack("Henry");
	alice.setHP(0);
	alice.attack("Isabella");
	alice.attack("Jack");
	alice.attack("Kevin");
	alice.attack("Laura");
	alice.attack("Mike");
	alice.highFivesGuys();
}

void	second_rundown(void)
{
	FragTrap	bob("Bob");

	while (bob.getHP())
	{
		bob.takeDamage(20);
		bob.beRepaired(10);
		std::cout << "Life " << bob.getHP() << std::endl;
	}
	bob.takeDamage(1);
	bob.highFivesGuys();
}

int	main(void)
{
	std::cout << std::endl << std::endl << "FIRST RUN" << std::endl << std::endl;
	first_rundown();
	std::cout << std::endl << std::endl << "SECOND RUn" << std::endl << std::endl;
	second_rundown();
}
