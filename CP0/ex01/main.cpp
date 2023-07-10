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
	if(!f.empty() && !l.empty() && !n.empty() && !p.empty() && !s.empty())
		return (true);
	return (false);
}

void	indexdis(void)
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
}

void	printstr(std::string s)
{
	int	l;
	l = s.length();
	if (!l)
		std::cout << std::setw(10) << "Empty" << "|";
	else if (l > 10)
		std::cout << std::setw(10) << s.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << s << "|";
}

void	search(PhoneBook pb)
{
	std::string	s;
	size_t		n;
	std::string	d;
	indexdis();
	for (int i = 0; i < 8; i++)
	{
		printstr(std::to_string(i + 1));
		printstr(pb.c[i].getfirst());
		printstr(pb.c[i].getlast());
		printstr(pb.c[i].getnick());
		std::cout << std::endl;
	}
	std::cout << ">> ";
	std::getline(std::cin, s);
	try
	{
		n = std::stoi(s);
		if (n >= 1 && n <= 8)
		{
			d = pb.c[n - 1].getsec();
			d.replace(0, d.length(), d.length(), '*');
			std::cout << std::setw(20) << "First name:	" << pb.c[n - 1].getfirst() << std::endl << std::setw(20) << "Last name:	" << pb.c[n - 1].getlast() << std::endl
				<< std::setw(20) << "Nickname:	" << pb.c[n - 1].getnick() << std::endl << std::setw(20) << "Phone number:	" << pb.c[n - 1].getphone() << std::endl
				<< std::setw(20) << "Darkest secret:	" << d << std::endl;
		}
		else
			std::cout << "Not a valid index"<< std::endl;
	}
	catch(const std::invalid_argument& e)
	{
		std::cout << "Not a valid argument"<< std::endl;
	}
	
	
}

void	add(PhoneBook *pb)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	sec;

	std::cout << "Please enter your first name" << std::endl << "> ";
	std::getline(std::cin, first);
	std::cout << "Please enter your last name" << std::endl << "> ";
	std::getline(std::cin, last);
	std::cout << "Please enter your nickname" << std::endl << "> ";
	std::getline(std::cin, nick);
	std::cout << "Please enter your phone number" << std::endl << "> ";
	std::getline(std::cin, phone);
	std::cout << "Please enter your darkest secret" << std::endl << "> ";
	std::getline(std::cin, sec);
	if (check(first, last, nick, phone, sec))
	{
		Contact	co(first, last, nick, phone, sec);
		pb->c[pb->n++ % 8] = co;
		std::cout << "	Contact added" << std::endl;
	}
	else
		std::cout << "	Contact not added" << std::endl;
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
		if (s == "ADD")
			add(&pb);
		else if (s == "SEARCH")
			search(pb);
		if (std::cin.eof())
			break ;
 	}
}