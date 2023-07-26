/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:49:02 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 18:51:06 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) :
	type("Ice")
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(Ice const &ic)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = ic;
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
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() 
		<< " *\"" << std::endl;
}