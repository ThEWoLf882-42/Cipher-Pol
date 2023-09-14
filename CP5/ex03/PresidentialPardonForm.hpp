/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:34:24 by agimi             #+#    #+#             */
/*   Updated: 2023/09/14 11:47:18 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Bureaucrat;

class	PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &t);
		PresidentialPardonForm(PresidentialPardonForm const &p);
		~PresidentialPardonForm(void);
		PresidentialPardonForm const	&operator=(PresidentialPardonForm const &p);

		void			execute(Bureaucrat const & executor) const;
		static AForm	*makeForm(std::string const &ta);
};

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &f);