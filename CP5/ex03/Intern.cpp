/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:04:27 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 11:55:13 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &i)
{
	*this = i;
}

Intern::~Intern(void)
{
}

Intern	&Intern::operator=(Intern const &i)
{
	(void)i;
	return	*this;
}

AForm	*Intern::makePre(std::string const &ta)
{
	return	PresidentialPardonForm::makeForm(ta);
}

AForm	*Intern::makeRob(std::string const &ta)
{
	return	RobotomyRequestForm::makeForm(ta);
}

AForm	*Intern::makeShru(std::string const &ta)
{
	return	ShrubberyCreationForm::makeForm(ta);
}

AForm	*Intern::makeForm(std::string const &ty, std::string const &ta)
{
	AForm	*(Intern::*f[])(std::string const &ta) =
			{&Intern::makePre,
			 &Intern::makeRob,
			 &Intern::makeShru};

	std::string	s[]=
				{"presidential pardon",
				 "robotomy request",
				 "shrubbery creation"
				};

	for (size_t i = 0; i < 3; i++)
	{
		if (ty == s[i])
			return	(this->*f[i])(ta);
	}
	throw AForm::InvalidFormException();
}