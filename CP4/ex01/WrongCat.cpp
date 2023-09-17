/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:56:38 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &c) : WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = c;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &c)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	type = c.type;
	return	*this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meow Meow" << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return	type;
}