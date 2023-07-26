/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:58:27 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 18:17:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &n) :
	name(n)
{
	std::cout << "Character String Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inv[i] = 0;
}

Character::Character(Character const &ch)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = ch;
}

Character::~Character(void)
{
	std::cout << "Character Deconstructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		delete inv[i];
}

Character	&Character::operator=(Character const &ch)
{
	for (size_t i = 0; i < 4; i++)
	{
		delete inv[i];
		inv[i] = ch.inv[i];
	}
	return	*this;
}

void	Character::equip(AMateria* m)
{
	int	i = -1;
	
	if(!m)
	{
		std::cout << "Nothing to equip" << std::endl;
		return ;
	}
	while (inv[++i] && i < 4)
		;
	if (i >= 4)
	{
		std::cout << "No slot available" << std::endl;
		return ;
	}
	inv[i] = m;
	std::cout << "Equipped materia " << m->getType() 
		<< " slot[" << i << "]" << std::endl;
}