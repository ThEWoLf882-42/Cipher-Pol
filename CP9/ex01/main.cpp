/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:18:39 by agimi             #+#    #+#             */
/*   Updated: 2023/09/25 14:42:51 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if	(ac == 2)
		RPN	rpn(av[1]);
	else
		std::cerr << "usage: ./RPN [inverted Polish mathematical expression]" << std::endl;
}