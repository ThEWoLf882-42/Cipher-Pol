/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:23:47 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Default Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const &d) : Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = d;
}

Dog::~Dog(void)
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &d)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	type = d.type;
	return	*this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woooof Wof Woof" << std::endl;
}

std::string	Dog::getType(void) const
{
	return	type;
}