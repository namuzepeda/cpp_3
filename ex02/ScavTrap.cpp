#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ScavTrap("Default") {
	std::cout << "ScavTrap " << name << " initialized with default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name) {
	this->hp = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << name << " initialized" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->name << " destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
	std::cout << "Copy of ScavTrap " << copy.name << " initialized" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy) {
	std::cout << "Assignment operator for ScavTrap " << copy.name << " called" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::guardGate(void) {
	if(0 >= this->hp)
		std::cout << "ScavTrap " << this->name << " cannot toggle gate-keeper mode, is dead" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " toggle gate-keeper mode" << std::endl;
}
