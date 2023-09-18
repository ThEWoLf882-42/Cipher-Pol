/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:45:23 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 15:30:28 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int>	v;
    v.push_back(69);
    v.push_back(88);
    v.push_back(42);
	
	try
    {
		::easyfind(v, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	
    try
    {
		::easyfind(v, 88);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}