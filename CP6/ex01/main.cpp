/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:30:53 by agimi             #+#    #+#             */
/*   Updated: 2023/09/17 10:34:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	d;
	d.b = true;
	d.i = 69;
	d.s = "ThEWoLf882";

	Data*	ptr = Serializer::deserialize(Serializer::serialize(&d));

	std::cout << "bool: " << ptr->b << std::endl;
	std::cout << "int: " << ptr->i << std::endl;
	std::cout << "string: " << ptr->s << std::endl;

	return 0;
}