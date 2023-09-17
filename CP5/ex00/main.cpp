/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:57:07 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat rach("Rachid", 0);
			std::cout << rach << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Bureaucrat gim("Gimi", 151);
			std::cout << gim << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	{
		try 
		{
			Bureaucrat sid("Sidqi", 3);
			std::cout << sid << std::endl;
			sid.incGrade();
			std::cout << sid << std::endl;
			sid.incGrade();
			std::cout << sid << std::endl;
			sid.incGrade();
			std::cout << sid << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Bureaucrat zak("Zakaria", 149);
			std::cout << zak << std::endl;
			zak.decGrade();
			std::cout << zak << std::endl;
			zak.decGrade();
			std::cout << zak << std::endl;
			zak.decGrade();
			std::cout << zak << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return	(0);
}