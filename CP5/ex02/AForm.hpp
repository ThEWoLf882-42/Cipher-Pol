/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:04:00 by agimi             #+#    #+#             */
/*   Updated: 2023/08/16 14:25:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class	AForm
{
	private:
		const std::string	name;
		bool				issig;
		const int 			sgra;
		const int 			egra;
	public:
		AForm(void);
		AForm(const std::string n, int sg, int eg);
		AForm(AForm const &f);
		virtual ~AForm(void);
		AForm	&operator=(AForm const &f);
		
		const std::string	getName(void) const;
		int					getsGrade(void) const;
		int					geteGrade(void) const;
		bool				getisSigned(void) const;

		void			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		
		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what(void) const throw();
		};
};

std::ostream	&operator<<(std::ostream &str, AForm const &f);