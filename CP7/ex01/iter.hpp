/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:18:55 by agimi             #+#    #+#             */
/*   Updated: 2023/09/19 19:57:08 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename A>
void	iter(A *ar, size_t l, void (*f)(A &))
{
	for (size_t i = 0; i < l; i++)
		f(ar[i]);
}

template<typename A>
void	iter(A const *ar, size_t l, void (*f)(A const &))
{
	for (size_t i = 0; i < l; i++)
		f(ar[i]);
}