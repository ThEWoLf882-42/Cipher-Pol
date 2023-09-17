/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:16:55 by agimi             #+#    #+#             */
/*   Updated: 2023/09/17 10:25:11 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

struct	Data
{
	std::string	s;
	int			i;
	bool		b;
};

class	Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(Serializer const &s);
		Serializer	&operator=(Serializer const &s);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};
