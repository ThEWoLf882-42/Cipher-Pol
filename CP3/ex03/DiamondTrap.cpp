/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:18:04 by agimi             #+#    #+#             */
/*   Updated: 2023/07/18 19:08:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("LOLDT_clap_name")
{
	name = "LOLDT";
	HP = FragTrap::HP;
	EP = ScavTrap::EP;
	AD = FragTrap::AD;
	std::cout << "DiamondTrap Def constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name")
{
	name = n;
	HP = FragTrap::HP;
	EP = ScavTrap::EP;
	AD = FragTrap::AD;
	std::cout << "DiamondTrap String constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &dt) : ClapTrap(dt), ScavTrap(dt), FragTrap(dt)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = dt;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &dt)
{
	name = dt.name + "_clap_name";
	HP = dt.HP;
	EP = dt.EP;
	AD = dt.AD;
	std::cout << "DiamondTrap Copy assignment operator constructor called" << std::endl;
	
	return *this;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << name << "ClapTrap name: " << ClapTrap::name << std::endl;
}