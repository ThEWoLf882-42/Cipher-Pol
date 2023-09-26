/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:47:59 by agimi             #+#    #+#             */
/*   Updated: 2023/09/26 15:52:22 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &p)
{
	*this = p;
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &p)
{
	if (this != &p)
	{
		v = p.v;
		l = p.l;
		in = p.in;
		pst = p.pst;
		pen = p.pen;
		vst = p.vst;
		ven = p.ven;
		lst = p.lst;
		len = p.len;
	}
	return	*this;
}

void	av_check(std::string t)
{
	char	*crumps;
	double	d;

	d = std::strtod(t.c_str(), &crumps);
	if (*crumps || d < 0)
	{
		std::cerr << "Error" << std::endl;
		exit(1);
	}
}

PmergeMe::PmergeMe(std::string const i, std::clock_t ps, std::clock_t pe) :
	in(i), pst(ps), pen(pe)
{
	
}