/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:08:41 by agimi             #+#    #+#             */
/*   Updated: 2023/09/13 15:33:38 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("ShrubberyCreationForm", 145, 137), target("null")
{	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &t) :
	AForm("ShrubberyCreationForm", 145, 137), target(t)
{	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &p):
	AForm(p), target(p.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm const	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &p)
{
	AForm::operator=(p);
	target = p.target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!issig)
		throw	FormNotSignedException();
	else if (executor.getGrade() > sgra)
		throw	GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executes form: " << name << std::endl;
		std::ofstream	out(target + "_shrubbery");
		if (out.fail())
		{
			std::cout << "Can't open " << target + "_shrubbery" << std::endl;
			return ;
		}
		out << TREE;
		out.close();
		std::cout << executor.getName() << " successfully created a shrubbery" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &f)
{
	return	str << f.getName() << " form, signed: " << f.getisSigned()
	<< ", sign grade: " << f.getsGrade() << ", exec grade: " << f.geteGrade();
}