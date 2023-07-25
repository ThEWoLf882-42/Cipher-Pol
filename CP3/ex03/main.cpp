/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:36:25 by agimi             #+#    #+#             */
/*   Updated: 2023/07/25 17:11:36 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING DIAMONDTRAP ###\n" << std::endl;
	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	DiamondTrap a;
	DiamondTrap b("Giga Chadd");
	DiamondTrap c(a);
	a.whoAmI();
	a.attack("some super random dude");
	b.whoAmI();
	b.attack("Chadd-clone");
	c.whoAmI();
	return (0);
}