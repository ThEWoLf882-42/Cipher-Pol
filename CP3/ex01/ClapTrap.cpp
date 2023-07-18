/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:11:53 by agimi             #+#    #+#             */
/*   Updated: 2023/07/18 15:28:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	name("LOL"), HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap Def constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n) :
	name(n), HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap String constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const ct)
{
	std::cout << "ClapTrap Copy assignment operator constructor called" << std::endl;
	name = ct.name;
	HP = ct.HP;
	EP = ct.EP;
	AD = ct.AD;
	
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (HP > 0 && EP > 0)
	{
		std::cout << "ClapTrap "<< name << " attacks "<< target << ", causing "<< AD << " points of damage!" << std::endl;
		EP--;
	}
	else
		std::cout << "ClapTrap " << name << " hasn't enough HP/EP" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(HP == 0)
		std::cout << "ClapTrap "<< name << " already dead"<< std::endl;
	else if (HP < amount)
	{
		std::cout << "ClapTrap "<< name << " Has taken " << HP << " Damage" << std::endl;
		HP = 0;
	}
	else
	{	
		HP -= amount;
		std::cout << "ClapTrap "<< name << " Has taken " << amount << " Damage" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (HP > 0 && EP > 0)
	{
		HP += amount;
		if (HP > 10)
			HP = 10;
		std::cout << "ClapTrap "<< name << " Has restored " << amount
				<< " HP (" << HP << "HP)" << std::endl;
		EP--;
	}
	else
		std::cout << "ClapTrap " << name << " hasn't enough HP/EP" << std::endl;
}