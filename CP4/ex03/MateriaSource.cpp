/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:57:05 by agimi             #+#    #+#             */
/*   Updated: 2023/07/27 12:38:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inv[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ma)
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inv[i] = ma.inv[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Deconstructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		delete inv[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &ma)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (inv[i])
			delete inv[i];
		if (ma.inv[i])
		inv[i] = ma.inv[i];
	}
	return	*this;
}

void	MateriaSource::learnMateria(AMateria *ma)
{
	int	i = -1;
	
	if(!ma)
	{
		std::cout << "Nothing to learn" << std::endl;
		return ;
	}
	while (inv[++i] && i < 4)
		;
	if (i >= 4)
	{
		std::cout << "No slot available" << std::endl;
		return ;
	}
	inv[i] = ma;
	std::cout << "Learned materia " << ma->getType()
		<< " slot[" << i << "]" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = -1;
	
	while (inv[++i] && i < 4 && inv[i]->getType() != type)
		;
	if(i >= 4 || !(inv[i]))
	{
		std::cout << type << " not found" << std::endl;
		return	NULL;
	}
	std::cout << "Materia " << type << " created" << std::endl;
	return	inv[i]->clone();
}