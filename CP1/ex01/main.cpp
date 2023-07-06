/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:22:07 by agimi             #+#    #+#             */
/*   Updated: 2023/07/06 20:45:58 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main()
{
	Zombie		*z;
	int			N;
	std::string	name;

	N = 5;
	name = "Hakim";
	z = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete []z;
}