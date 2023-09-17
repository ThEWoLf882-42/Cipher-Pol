/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:36:17 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		name = av[1];
		
		std::ifstream	ifs(name);
		if (ifs.fail())
		{
			std::cout << "Can't open " << name << std::endl;
			return	(1);
		}
		
		std::ofstream	ofs(name + ".replace");
		if (ofs.fail())
		{
			std::cout << "Can't open " << name + ".replace" << std::endl;
			return	(1);
		}
		
		std::string		in;
		std::string		str;

		while(std::getline(ifs, in))
		{
			while (in.find(av[2]) != std::string::npos && std::strcmp(av[2], av[3]))
				in = in.substr(0, in.find(av[2])) + av[3] + in.substr(in.find(av[2]) + std::strlen(av[2]), in.length());
			str += in;
			if (!ifs.eof())
				str += "\n";
		}
		ofs << str;
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "Sed: <filename> s1:string to replace s2:to replace with" << std::endl;
}