#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("Default") {
	std::cout << "ScavTrap " << name << " initialized with default constructor" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name) {
	this->hp = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap " << name << " initialized" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	std::cout << "Copy of FragTrap " << copy.name << " initialized" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy) {
	std::cout << "Assignment operator for FragTrap " << copy.name << " called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	if(0 >= this->hp)
		std::cout << "FragTrap " << this->name << " cannot high five, is dead" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " high five" << std::endl;
}
