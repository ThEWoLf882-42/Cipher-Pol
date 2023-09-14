/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:36:45 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 12:03:02 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern		q;
	AForm		*form;
	Bureaucrat	ay("Aymane", 50);

	// Test how all forms are created properly execpt for the last one
	try
	{
		form = q.makeForm("robotomy request", "Alice");
		delete form;
		form = q.makeForm("shrubbery creation", "Quentin");
		delete form;
		form = q.makeForm("presidential pardon", "Eliot");
		delete form;
		form = q.makeForm("random request", "Julia");
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	// Test some Actions with available form
	std::cout << "------------------------------------" << std::endl;
	form = q.makeForm("shrubbery creation", "Penny");
	ay.signForm(*form);
	ay.executeForm(*form);
	delete form;
	std::cout << "\n------------------------------------" << std::endl;
	form = q.makeForm("presidential pardon", "Kady");
	ay.signForm(*form);
	ay.executeForm(*form);
	delete form;
	return (0);
}