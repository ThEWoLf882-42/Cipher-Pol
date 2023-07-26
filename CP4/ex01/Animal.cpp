/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:13:45 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 10:48:09 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(Animal const &a)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = a;
}

Animal::~Animal(void)
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &a)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	type = a.type;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "~~~~~~~~~~" << std::endl;
}

std::string	Animal::getType(void) const
{
	return	type;
}