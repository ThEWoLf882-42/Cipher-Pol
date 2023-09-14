/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:04:04 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 11:41:48 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	AForm;

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const &i);
		~Intern(void);
		Intern	&operator=(Intern const &i);

		AForm	*makeForm(std::string const &ty, std::string const &ta);
		AForm	*makePre(std::string const &ta);
		AForm	*makeRob(std::string const &ta);
		AForm	*makeShru(std::string const &ta);
};