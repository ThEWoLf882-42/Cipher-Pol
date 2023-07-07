/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:36:17 by agimi             #+#    #+#             */
/*   Updated: 2023/07/07 18:15:23 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		out = av[1];
		std::ifstream	ifs(av[1]);
		std::ofstream	ofs(out + ".replace");
	}
	else
		std::cout << "Sed: <filename> s1:string to replace s2:to replace with" << std::endl;
}