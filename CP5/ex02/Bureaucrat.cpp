/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:56:46 by agimi             #+#    #+#             */
/*   Updated: 2023/09/13 15:40:06 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) :
	name("Default"), gra(150)
{
}

Bureaucrat::Bureaucrat(const std::string n, int g) :
	name(n)
{
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	gra = g;
}

Bureaucrat::Bureaucrat(Bureaucrat const &b)
{
	*this = b;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &b)
{
	(std::string)name = (std::string)b.name;
	gra = b.gra;
	return *this;
}

const std::string	Bureaucrat::getName(void) const
{
	return name;
}

int	Bureaucrat::getGrade(void) const
{
	return gra;
}

void	Bureaucrat::incGrade(void)
{
	if (gra - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	gra--;
}

void	Bureaucrat::decGrade(void)
{
	if (gra + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	gra++;
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name << " cannot sign " << f.getName() << " because: " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & f)
{
	try
	{
		f.execute(*this);
		std::cout << name << " executed " << f.getName();
	}
	catch(std::exception& e)
	{
		std::cout << name << " cannot execute " << f.getName() << " because: " << e.what() << std::endl;
	}
	
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade Too High";
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade Too Low";
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &b)
{
	return str << b.getName() << "'s Grade: " << b.getGrade();
}