/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:04:00 by agimi             #+#    #+#             */
/*   Updated: 2023/08/14 14:57:26 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	name;
		bool				issig;
		const int 			sgra;
		const int 			egra;
	public:
		Form(void);
		Form(const std::string n, int sg, int eg);
		Form(Form const &f);
		~Form(void);
		Form	&operator=(Form const &f);
		
		const std::string	getName(void) const;
		int					getsGrade(void) const;
		int					geteGrade(void) const;
		bool				getisSigned(void) const;

		void	beSigned(Bureaucrat &b);
		
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

std::ostream	&operator<<(std::ostream &str, Form const &f);