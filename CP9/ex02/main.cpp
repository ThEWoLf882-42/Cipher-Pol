/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:34:02 by agimi             #+#    #+#             */
/*   Updated: 2023/09/26 17:45:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		std::string		in;

		std::clock_t	pst = std::clock();
		for (int i = 1; i < ac; i++)
		{
			std::string	t = av[i];
			av_check(t);
			in += t + (i == ac - 1 ? "" : " ");
		}
		std::clock_t	pen = std::clock();
		
		PmergeMe	P(in, pst, pen);
		return	0;
	}
	else
		std::cerr << "No argument inserted" << std::endl;
	return	1;
}