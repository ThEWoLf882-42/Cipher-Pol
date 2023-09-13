/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:16:41 by agimi             #+#    #+#             */
/*   Updated: 2023/09/13 15:18:20 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Bureaucrat;

class	RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const &t);
		RobotomyRequestForm(RobotomyRequestForm const &p);
		~RobotomyRequestForm(void);
		RobotomyRequestForm const	&operator=(RobotomyRequestForm const &p);

		void	execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &f);