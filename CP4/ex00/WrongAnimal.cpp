/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:55:23 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 10:55:34 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Default")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = a;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &a)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	type = a.type;
	return	*this;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong~~~~~~~~~~" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return	type;
}