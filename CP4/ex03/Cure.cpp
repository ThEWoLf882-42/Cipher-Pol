/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:37:03 by agimi             #+#    #+#             */
/*   Updated: 2023/07/27 12:38:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) :
	type("cure")
{
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(Cure const &cu) :
	type(cu.getType())
{
	std::cout << "Cure Copy Constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure Deconstructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const &cu)
{
	type = cu.type;
	return *this;
}

std::string	const & Cure::getType() const
{
	return	type;
}

Cure	*Cure::clone() const
{
	Cure	*clone = new Cure;
	return	clone;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() 
		<< "'s wounds *" << std::endl;
}