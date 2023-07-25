/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:35:30 by agimi             #+#    #+#             */
/*   Updated: 2023/07/25 17:14:11 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	FragTrap a;
	FragTrap b("Giga Chadd");
	FragTrap c(a);
	a.highFivesGuys();
	a.attack("some super random dude");
	b.highFivesGuys();
	b.attack("Chadd-clone");
	c.highFivesGuys();
	return (0);
}