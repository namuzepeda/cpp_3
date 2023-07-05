#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap: public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string const &name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &copy);

		ScavTrap	&operator=(ScavTrap const &copy);

		void 	attack(std::string const &target);

		void	guardGate(void);

};

#endif
