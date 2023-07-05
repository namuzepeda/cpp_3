#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Default"), hp(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap " << name << " initialized with default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): hp(10), energy_points(10), attack_damage(0) {
	this->name = name;
	std::cout << "ClapTrap " << name << " initialized" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Copy of ClapTrap " << copy.name << " initialized" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignment operator for ClapTrap " << copy.name << " called." << std::endl;
	this->name = copy.name;
	this->hp = copy.hp;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if(0 >= this->energy_points)
		std::cout << "ClapTrap " << this->name << " cannot attack, has no energy points" << std::endl;
	else if(0 >= this->hp)
		std::cout << "ClapTrap " << this->name << " cannot attack, is dead" << std::endl;
	else {
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if(0 >= this->hp)
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
	else {
		setHP(this->hp - amount);
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if(0 >= this->hp)
		std::cout << "ClapTrap " << this->name << " cannot be healed, is dead" << std::endl;
	else if(0 >= this->energy_points)
		std::cout << "ClapTrap " << this->name << " cannot be healed, has no energy points" << std::endl;
	else {
		this->energy_points--;
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " healed " << amount << " points" << std::endl;
	}
}

std::string const	&ClapTrap::getName(void) const {
	return (this->name);
}

void	ClapTrap::setName(std::string const &name) {
	this->name = name;
}

int ClapTrap::getHP(void) {
	return (this->hp);
}

void	ClapTrap::setHP(int amount) {
	if(0 > amount)
		amount = 0;
	this->hp = amount;
}

int	ClapTrap::getEnergyPoints(void) {
	return (this->energy_points);
}

void	ClapTrap::setEnergyPoints(int amount) {
	this->energy_points = amount;
}

int	ClapTrap::getAttackDamage(void) {
	return (this->attack_damage);
}

void	ClapTrap::setAttackDamage(int amount) {
	this->attack_damage = amount;
}
