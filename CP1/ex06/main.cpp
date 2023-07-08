/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:49:44 by agimi             #+#    #+#             */
/*   Updated: 2023/07/08 20:49:43 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		h;
	std::string	level;
	std::string	selection[] = 
				{"DEBUG", "INFO", "WARNING", "ERROR"};
	int			l = -1;

	if (ac == 2)
		level = av[1];
	else
		level = "Garbage";
	
	for (size_t i = 0; i < 4; i++)
	{
		if (selection[i] == level)
			l = i + 1;
	}
	
	switch (l)
	{
	case 1:
		h.complain("DEBUG");
	case 2:
		h.complain("INFO");
	case 3:
		h.complain("WARNING");
	case 4:
		h.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		// break;
	}
	return (0);
}