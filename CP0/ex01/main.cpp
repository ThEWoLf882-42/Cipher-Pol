/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:16:02 by agimi             #+#    #+#             */
/*   Updated: 2023/07/05 16:16:02 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	check(std::string f, std::string l, std::string n, std::string p, std::string s)
{
	if(f != "" && l != "" && n != "" && p != "" && s != "")
		return (true);
	return (false);
}

void	search(PhoneBook pb)
{
	return;
}

void	add(PhoneBook *pb)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	sec;

	std::cout << pb->c[0].getfirst() << std::endl;
	std::cout << "Please enter your first name >  " << std::endl;
	std::getline(std::cin, first);
	std::cout << "Please enter your last name >  " << std::endl;
	std::getline(std::cin, last);
	std::cout << "Please enter your nickname >  " << std::endl;
	std::getline(std::cin, nick);
	std::cout << "Please enter your phone number >  " << std::endl;
	std::getline(std::cin, phone);
	std::cout << "Please enter your darkest secret >  " << std::endl;
	std::getline(std::cin, sec);
	if (check(first, last, nick, phone, sec))
	{
		Contact	co(first, last, nick, phone, sec);
		pb->c[pb->n++ % 8] = co;
	}
	std::cout << pb->c[0].getfirst() << std::endl;
	return;
}

int	main()
{
	PhoneBook	pb;
	std::string	s;


	while (s != "EXIT")
	{
		std::cout << "PLease enter a valid command:\n	ADD\n	SEARCH\n	EXIT\n>> ";
		std::getline(std::cin, s);
		if (s == "ADD" || s == "add")
			add(&pb);
		else if (s == "SEARCH" || s == "search")
			search();
		if (std::cin.eof())
			break ;
 	}
}