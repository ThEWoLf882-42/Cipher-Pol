/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:56:59 by agimi             #+#    #+#             */
/*   Updated: 2023/08/14 15:21:34 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const std::string	name;
		int		gra;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string n, int g);
		Bureaucrat(Bureaucrat const &b);
		~Bureaucrat(void);
		Bureaucrat	&operator=(Bureaucrat const &b);

		const std::string	getName(void) const;
		int					getGrade(void) const;

		void	incGrade(void);
		void	decGrade(void);
		void	signForm(AForm &f);
		void	executeForm(AForm const & f);
		
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

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &b);