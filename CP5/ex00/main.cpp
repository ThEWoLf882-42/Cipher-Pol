/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:57:07 by agimi             #+#    #+#             */
/*   Updated: 2023/09/03 12:54:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat mike("Halim", 0);
			std::cout << mike << std::endl;
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
			Bureaucrat dur("Sidqi", 3);
			std::cout << dur << std::endl;
			dur.incGrade();
			std::cout << dur << std::endl;
			dur.incGrade();
			std::cout << dur << std::endl;
			dur.incGrade();
			std::cout << dur << std::endl;
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
			Bureaucrat alan("Zakaria", 149);
			std::cout << alan << std::endl;
			alan.decGrade();
			std::cout << alan << std::endl;
			alan.decGrade();
			std::cout << alan << std::endl;
			alan.decGrade();
			std::cout << alan << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}