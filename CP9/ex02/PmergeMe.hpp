/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:48:18 by agimi             #+#    #+#             */
/*   Updated: 2023/09/26 20:23:55 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ctime>
#include <iostream>
#include <algorithm>
#include <utility>
#include <sstream>
#include <vector>
#include <list>

class	PmergeMe
{
	private:
		std::vector<int>	v;
		std::list<int>		l;
		std::string			in;
		std::clock_t		pst;
		std::clock_t		pen;
		std::clock_t		vst;
		std::clock_t		ven;
		std::clock_t		lst;
		std::clock_t		len;
		PmergeMe();
		
		template<typename T>
		void	fill(T &vl);
		template<typename T>
		void	sort(T &vl);
		template<typename T>
		void	insert(T &vl);
		template<typename T>
		void	merge(T &vl);
	public:
		PmergeMe(std::string const i, std::clock_t ps, std::clock_t pe);
		~PmergeMe();
		PmergeMe(PmergeMe const &p);
		PmergeMe	&operator=(PmergeMe const &p);
};

void	av_check(std::string t);