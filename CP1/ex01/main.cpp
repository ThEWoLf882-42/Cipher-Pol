/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:22:07 by agimi             #+#    #+#             */
/*   Updated: 2023/07/11 15:53:07 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie		*z;
	int			N;
	std::string	name;

	N = 9;
	name = "Foo";
	z = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete []z;
}