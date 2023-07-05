#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:

		std::string	name;
		int			hp;
		int			energy_points;
		int			attack_damage;

	public:

		ClapTrap(void);
		ClapTrap(std::string const &name);
		~ClapTrap(void);
		ClapTrap(ClapTrap const &copy);

		ClapTrap			&operator=(ClapTrap const &copy);

		void 				attack(std::string const &target);
		void 				takeDamage(unsigned int amount);
		void 				beRepaired(unsigned int amount);

		std::string const	&getName(void) const;
		int					getHP();
		int					getEnergyPoints();
		int					getAttackDamage();

		void				setName(std::string const &name);
		void				setHP(int amount);
		void				setEnergyPoints(int amount);
		void				setAttackDamage(int amount);
};

#endif
