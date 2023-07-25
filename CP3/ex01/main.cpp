/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:12:50 by agimi             #+#    #+#             */
/*   Updated: 2023/07/25 17:13:22 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	ScavTrap a;
	ScavTrap b("Giga Chadd");
	ScavTrap c(a);
	a.guardGate();
	a.attack("some super random dude");
	b.guardGate();
	b.attack("Chadd-clone");
	c.guardGate();
	return (0);
}