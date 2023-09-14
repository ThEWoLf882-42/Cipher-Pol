/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:03:54 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 12:33:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	name("Default"), issig(0), sgra(150), egra(150)
{
}

Form::Form(const std::string n, int sg, int eg) :
	name(n), issig(0), sgra(sg), egra(eg)
{
	if (sgra < 1)
		throw Form::GradeTooHighException();
	else if (sgra > 150)
		throw Form::GradeTooLowException();
	if (egra < 1)
		throw Form::GradeTooHighException();
	else if (egra > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &f):
	name(f.name), issig(f.issig), sgra(f.sgra), egra(f.egra)
{
}

Form::~Form(void)
{
}

Form	&Form::operator=(Form const &f)
{
	issig = f.issig;
	return *this;
}

const std::string	Form::getName(void) const
{
	return name;
}

int	Form::getsGrade(void) const
{
	return sgra;
}

int	Form::geteGrade(void) const
{
	return egra;
}

bool	Form::getisSigned(void) const
{
	return issig;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= sgra)
		issig = true;
	else
		throw Form::GradeTooLowException();
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return "Grade Too High";
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return "Grade Too Low";
}

std::ostream	&operator<<(std::ostream &str, Form const &f)
{
	return str << "Name: " << f.getName() << "\n\tis signed: " << f.getisSigned() 
		<< "\n\tsign grade: " << f.getsGrade() << "\n\texecute grade: " << f.geteGrade();
}