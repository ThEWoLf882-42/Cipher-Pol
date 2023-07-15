/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:11:33 by agimi             #+#    #+#             */
/*   Updated: 2023/07/15 15:21:18 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	// ClapTrap	ct("gera");

	// ct.beRepaired(1);
	// ct.attack("hary");
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	// ct.beRepaired(1);
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	}
	return (0);
}