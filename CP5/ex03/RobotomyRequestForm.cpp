/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:16:51 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 12:39:36 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("RobotomyRequestForm", 72, 45), target("null")
{	
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &t) :
	AForm("RobotomyRequestForm", 72, 45), target(t)
{	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &p):
	AForm(p), target(p.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm const	&RobotomyRequestForm::operator=(RobotomyRequestForm const &p)
{
	AForm::operator=(p);
	target = p.target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	s;
	if (!issig)
		throw	FormNotSignedException();
	else if (executor.getGrade() > sgra)
		throw	GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executes form: " << name << std::endl;
		srand(time(NULL));
		s = rand() % 2;
		if (s)
			std::cout << target << " has been robotomized successfully" << std::endl;
		else
			std::cout << target << "'s robotomization failed" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &f)
{
	return	str << f.getName() << " form, signed: " << (f.getisSigned() ? "\033[32mSigned\033[0m" : "\033[35mNot Signed\033[0m")
	<< ", sign grade: " << f.getsGrade() << ", exec grade: " << f.geteGrade();
}