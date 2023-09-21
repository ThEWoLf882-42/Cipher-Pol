/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:22:05 by agimi             #+#    #+#             */
/*   Updated: 2023/09/21 16:50:33 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::reverse_iterator iterator;
		MutantStack() : std::stack<T>()
		{
		}
		MutantStack(MutantStack const &src) : std::stack<T>(src)
		{
		}
		MutantStack &operator=(MutantStack const &s)
		{
			if (this != &s)
				this->c = s.c;
			return	*this;
		}
		~MutantStack()
		{
		}
		iterator begin()
		{
			return	this->c.rbegin();
		}
		iterator end()
		{
			return	this->c.rend();
		}
};