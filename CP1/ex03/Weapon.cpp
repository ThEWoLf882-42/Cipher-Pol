/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:45:21 by agimi             #+#    #+#             */
/*   Updated: 2023/07/07 16:42:11 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) :
	type(t)
{
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void)
{
	return	this->type;
}

void	Weapon::setType(std::string	t)
{
	this->type = t;
}