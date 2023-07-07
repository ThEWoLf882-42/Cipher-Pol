/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:51:49 by agimi             #+#    #+#             */
/*   Updated: 2023/07/07 12:20:27 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string;
	std::string	*stringPTR;
	std::string	&stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << "string    %p: " << &string << std::endl;
	std::cout << "stringPTR %p: " << stringPTR << std::endl;
	std::cout << "stringREF %p: " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "string    %s: " << string << std::endl;
	std::cout << "stringPTR %s: " << *stringPTR << std::endl;
	std::cout << "stringREF %s: " << stringREF << std::endl;
}