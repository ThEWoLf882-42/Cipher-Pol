/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:34:02 by agimi             #+#    #+#             */
/*   Updated: 2023/09/26 15:54:48 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string		in;

		std::clock_t	pst = std::clock();
		for (size_t i = 1; i < ac; i++)
		{
			av_check(av[i]);
			in += std::string(av[1]) + (i == ac - 1 ? "" : " ");
		}
		std::clock_t	pen = std::clock();
		
	}
}