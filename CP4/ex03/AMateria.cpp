/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:28:06 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 17:04:16 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & ty) :
	type(ty)
{
	std::cout << "AMateria String Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &am)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = am;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Deconstructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &am)
{
	type = am.type;
	return *this;
}

std::string	const & AMateria::getType() const
{
	return	type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used:" << target.getName() << std::endl;
}