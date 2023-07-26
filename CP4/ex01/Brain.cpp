/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:23:19 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 16:10:43 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain const &b)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = b;
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &b)
{
	std::cout << "Brain Assignation operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		ideas[i].assign(b.ideas[i]);
	return	*this;
}

const std::string	Brain::getIdea(size_t i) const
{
	if (i < 100)
		return	ideas[i];
	return	"You passed the [100]";
}

const std::string	*Brain::getAdd(size_t i) const
{
	if (i < 100)
	{
		const std::string	&idref = ideas[i];
		return	&idref;
	}
	else
		return	NULL;
}

void	Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		ideas[i] = idea;
	else
		std::cout << "You passed the [100]" << std::endl;
}