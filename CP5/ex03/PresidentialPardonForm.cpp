/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:34:27 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 12:39:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("PresidentialPardonForm", 25, 5), target("null")
{	
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &t) :
	AForm("PresidentialPardonForm", 25, 5), target(t)
{	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p):
	AForm(p), target(p.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm const	&PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
	AForm::operator=(p);
	target = p.target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!issig)
		throw	FormNotSignedException();
	else if (executor.getGrade() > sgra)
		throw	GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executes form: " << name << std::endl;
		std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &f)
{
	return	str << f.getName() << " form, signed: " << (f.getisSigned() ? "\033[32mSigned\033[0m" : "\033[35mNot Signed\033[0m")
	<< ", sign grade: " << f.getsGrade() << ", exec grade: " << f.geteGrade();
}