/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:42:00 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 16:01:21 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	type = "Cat";
	br = new Brain();
}

Cat::Cat(Cat const &c) : Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = c;
}

Cat::~Cat(void)
{
	std::cout << "Cat Deconstructor called" << std::endl;
	delete	br;
}

Cat	&Cat::operator=(Cat const &c)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	type = c.type;
	br = new Brain();
	*br = *c.br;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow" << std::endl;
}

std::string	Cat::getType(void) const
{
	return	type;
}

void	Cat::getIdeas(void) const
{
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << "\tCat idea [" << i << "]: \"" << br->getIdea(i) 
			<< "\" %p: " << br->getAdd(i) << std::endl;
	}
}

void	Cat::setIdea(size_t i, std::string idea)
{
	br->setIdea(i, idea);
}