/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:58:27 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
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

Character::Character(Character const &ch) :
    name(ch.getName())
{
    std::cout << "Character Copy Constructor called" << std::endl;
    for (size_t i = 0; i < 4; i++)
        inv[i] = ch.inv[i] ? ch.inv[i]->clone() : nullptr;
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
		inv[i] = ch.inv[i]->clone();
	}
	return	*this;
}

const std::string	&Character::getName() const
{
	return	name;
}

void	Character::equip(AMateria* m)
{
	int	i = -1;
	
	if(!m)
	{
		std::cout << "Nothing to equip" << std::endl;
		return	;
	}
	while (inv[++i] && i < 4)
		;
	if (i >= 4)
	{
		std::cout << "No slot available" << std::endl;
		return	;
	}
	inv[i] = m;
	std::cout << "Equipped materia " << m->getType() 
		<< " slot[" << i << "]" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << "not a valid slot[" << idx << "]" << std::endl;
	else if (!inv[idx])
		std::cout << "slot[" << idx << "] not equipped" << std::endl;
	else
	{
		AMateria	*sav = inv[idx];
		std::cout << "unequipped "	<< sav->getType() << "in slot[" << "]" << std::endl;
		inv[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !inv[idx])
	{
		std::cout << "Nothing to use in slot[" << idx << "]" << std::endl;
		return	;
	}
	std::cout << getName() << ": ";
	inv[idx]->use(target);
}

AMateria	*Character::getMateria(int idx)
{
	return	inv[idx];
}