/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:03:28 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 11:13:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename A>
void	swap(A &x, A &y)
{
	A	t;

	t = x;
	x = y;
	y = t;
}

template<typename A>
A const	&min(A const &x, A const &y)
{
	return	x < y ? x : y;
}

template<typename A>
A const	&max(A const &x, A const &y)
{
	return	x > y ? x : y;
}