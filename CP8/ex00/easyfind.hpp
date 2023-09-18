/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:44:40 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 15:30:57 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iterator>
# include <algorithm>
# include <vector>

template<typename T>
void	easyfind(T &f, int s)
{
	typename T::iterator	t;

	t = std::find(f.begin(), f.end(), s);
	if (t == f.end())
		throw std::out_of_range("Element Not Found");
	std::cout << *t << " found" << std::endl;
}