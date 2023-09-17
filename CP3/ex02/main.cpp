/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:35:30 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	FragTrap a;
	FragTrap b("Sigma");
	FragTrap c(a);
	a.highFivesGuys();
	a.attack("random dude");
	b.highFivesGuys();
	b.attack("BIll clo");
	c.highFivesGuys();
	return	(0);
}