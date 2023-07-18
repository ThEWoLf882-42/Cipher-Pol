/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:19:53 by agimi             #+#    #+#             */
/*   Updated: 2023/07/18 19:08:45 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	HP = 100;
	EP = 100;
	AD = 30;
	std::cout << "FragTrap Def constructor called" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	HP = 100;
	EP = 100;
	AD = 30;
	std::cout << "FragTrap String constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ft) : ClapTrap(ft)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = ft;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &st)
{
	name = st.name;
	HP = st.HP;
	EP = st.EP;
	AD = st.AD;
	std::cout << "FragTrap Copy assignment operator constructor called" << std::endl;
	
	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (HP > 0 && EP > 0)
	{
		std::cout << "FragTrap "<< name << " attacks "<< target << ", causing "<< AD << " points of damage!" << std::endl;
		EP--;
	}
	else
		std::cout << "FragTrap " << name << " hasn't enough HP/EP" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << ": Give me five!" << std::endl;
}