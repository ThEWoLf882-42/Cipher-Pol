/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:40:54 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 13:44:58 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> a(5);

    for (size_t i = 0; i < a.size(); i++)
        a[i] = i * 2;

    std::cout << "Elements of a: ";
    for (size_t i = 0; i < a.size(); i++) 
		std::cout << a[i] << " ";
    std::cout << std::endl;

    try
	{
        a[10] = 42;
    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
