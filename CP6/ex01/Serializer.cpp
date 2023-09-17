/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:17:08 by agimi             #+#    #+#             */
/*   Updated: 2023/09/17 10:30:22 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(Serializer const &s)
{
	*this = s;
}

Serializer	&Serializer::operator=(Serializer const &s)
{
	(void)s;
	return	*this;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return	reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return	reinterpret_cast<Data*>(raw);
}