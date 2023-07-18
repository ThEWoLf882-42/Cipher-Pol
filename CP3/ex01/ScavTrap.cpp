/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:31:34 by agimi             #+#    #+#             */
/*   Updated: 2023/07/18 17:12:10 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	HP = 100;
	EP = 50;
	AD = 20;
	gkm = false;
	std::cout << "ScavTrap Def constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	HP = 100;
	EP = 50;
	AD = 20;
	gkm = false;
	std::cout << "ScavTrap String constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &st) : ClapTrap(st)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = st;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const st)
{
	name = st.name;
	HP = st.HP;
	EP = st.EP;
	AD = st.AD;
	std::cout << "ScavTrap Copy assignment operator constructor called" << std::endl;
	
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (HP > 0 && EP > 0)
	{
		std::cout << "ScavTrap "<< name << " attacks "<< target << ", causing "<< AD << " points of damage!" << std::endl;
		EP--;
	}
	else
		std::cout << "ScavTrap " << name << " hasn't enough HP/EP" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	gkm = true;
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}