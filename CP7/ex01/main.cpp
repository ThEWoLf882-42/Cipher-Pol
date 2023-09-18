/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:19:20 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 11:52:25 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
template<typename C>
void	Upper(C &c)
{
	c = std::toupper(static_cast<char>(c));
}

int	main()
{
	std::string	a = "My Number Is 69";
	std::cout << "a = " << a << std::endl;

	::iter(&a[0], a.size(), Upper);
	std::cout << "a = " << a << std::endl;

	int	i[] = {'a', 'b', 'c'};
	for (size_t j = 0; j < 3; j++)
		std::cout << "i = " << i[j] << std::endl;
	std::cout << std::endl;

	::iter(i, 3, Upper);
	for (size_t j = 0; j < 3; j++)
		std::cout << "i = " << i[j] << std::endl;
}