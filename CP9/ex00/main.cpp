/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:48:40 by agimi             #+#    #+#             */
/*   Updated: 2023/09/25 14:42:46 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if	(ac == 2)
		BitcoinExchange	bit(av[1]);
	else
		std::cerr << "usage: ./btc [file]" << std::endl;
}
