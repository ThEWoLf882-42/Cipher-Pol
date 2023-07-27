/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:49:02 by agimi             #+#    #+#             */
/*   Updated: 2023/07/27 12:39:12 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) :
	type("ice")
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(Ice const &ic) :
	type(ic.getType())
{
	std::cout << "Ice Copy Constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice Deconstructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &ic)
{
	type = ic.type;
	return *this;
}

std::string	const & Ice::getType() const
{
	return	type;
}

Ice	*Ice::clone() const
{
	Ice	*clone = new Ice;
	return	clone;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() 
		<< " *" << std::endl;
}