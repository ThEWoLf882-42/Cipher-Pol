/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:03:54 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) :
	name("Default"), issig(0), sgra(150), egra(150)
{
}

AForm::AForm(const std::string n, int sg, int eg) :
	name(n), issig(0), sgra(sg), egra(eg)
{
	if (sgra < 1)
		throw AForm::GradeTooHighException();
	else if (sgra > 150)
		throw AForm::GradeTooLowException();
	if (egra < 1)
		throw AForm::GradeTooHighException();
	else if (egra > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &f):
	name(f.name), issig(f.issig), sgra(f.sgra), egra(f.egra)
{
}

AForm::~AForm(void)
{
}

AForm	&AForm::operator=(AForm const &f)
{
	issig = f.issig;
	return	*this;
}

const std::string	AForm::getName(void) const
{
	return	name;
}

int	AForm::getsGrade(void) const
{
	return	sgra;
}

int	AForm::geteGrade(void) const
{
	return	egra;
}

bool	AForm::getisSigned(void) const
{
	return	issig;
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= sgra)
		issig = true;
	else
		throw AForm::GradeTooLowException();
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return	"Grade Too High";
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return	"Grade Too Low";
}

const char	*AForm::FormNotSignedException::what(void) const throw()
{
	return	"Form not signed";
}

const char	*AForm::InvalidFormException::what(void) const throw()
{
	return	"Invalid Form";
}

std::ostream	&operator<<(std::ostream &str, AForm const &f)
{
	return	str << "Name: " << f.getName() << "\n\tis signed: " << f.getisSigned() 
		<< "\n\tsign grade: " << f.getsGrade() << "\n\texecute grade: " << f.geteGrade();
}