/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:34:24 by agimi             #+#    #+#             */
/*   Updated: 2023/08/16 14:22:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		std::string	terget;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &t);
		PresidentialPardonForm(PresidentialPardonForm const &p);
		~PresidentialPardonForm(void);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &p);

		void	
};