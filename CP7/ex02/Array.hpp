/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:40:22 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 13:43:57 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
class	Array
{
	private:
		T		*a;
		size_t	s;
	public:
		Array() : a(NULL), s(0)
		{
		}
		Array(unsigned int i)
		{
			try
			{
				a = new	T[i];
				s = i;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
		~Array()
		{
			delete[] a;
		}
		Array(Array const &ar)
		{
			a = NULL;
			*this = ar;
		}
		Array	&operator=(Array const &ar)
		{
			if (this != ar)
			{
				if (a)
					delete[] a;
				a = new T[ar.size()];
				s = ar.size();
				for (size_t i = 0; i < ar.size(); i++)
					a[i] = ar.a[i];
			}
			return	*this;
		}

		size_t	size() const
		{
			return	s;
		}
		T	&operator[](size_t i)
		{
			if (i >= s || s == 0)
				throw	std::range_error("Index out of Range");
			return	a[i];
		}

};
