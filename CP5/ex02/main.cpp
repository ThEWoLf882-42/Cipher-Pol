/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:36:45 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 10:55:54 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	/* Create the 3 forms and some Bureaucrats */

	ShrubberyCreationForm shrubbery("1337");
	RobotomyRequestForm robotomy("SWG");
	PresidentialPardonForm pardon("AMBER");
	Bureaucrat ay("Aymane", 150);
	Bureaucrat zak("Zakaria", 120);
	Bureaucrat rach("Rachid", 3);
	
	/* Try to execute forms without being signed */
	{
		try
		{
			std::cout << ay << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			ay.executeForm(shrubbery);
			ay.executeForm(robotomy);
			ay.executeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	/* Sign form and try to execute without enough grade */
	{
		try
		{
			std::cout << ay << std::endl;
			std::cout << zak << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			zak.signForm(shrubbery);
			ay.executeForm(shrubbery);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "\n --------------------- \n\n";
	
	/* Sign forms and execute them */
	{
		try
		{
			rach.signForm(robotomy);
			rach.signForm(pardon);
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			
			std::cout << "\n --------------------- \n\n";
			rach.executeForm(shrubbery);
			std::cout << "\n --------------------- \n\n";
			rach.executeForm(robotomy);
			std::cout << "\n --------------------- \n\n";
			rach.executeForm(pardon);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n --------------------- \n\n";


	return (0);
}