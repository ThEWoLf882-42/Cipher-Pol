/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:47:59 by agimi             #+#    #+#             */
/*   Updated: 2023/09/27 12:20:36 by agimi            ###   ########.fr       */
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
	lst = std::clock();
	fill(l);
	sort(l);
	len = std::clock();

	vst = std::clock();
	fill(v);
	sort(v);
	ven = std::clock();

	std::cout << "Before:\t" << in << std::endl;
	
	std::cout << "After:\t";
	for(std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	double	timer_l = static_cast<double>(len - lst);
	double	timer_v = static_cast<double>(ven - vst);

	std::cout << "Time to process a range of " << l.size() 
	<< " elements with std::list " << timer_l + (pen - pst) << "µs" << std::endl;

	std::cout << "Time to process a range of " << v.size() 
	<< " elements with std::vector " << timer_v + (pen - pst) << "µs" << std::endl;
}

template<typename T>
void	PmergeMe::fill(T &vl)
{
	std::stringstream	ss(in);
	std::string			t;
	
	while (ss >> t)
		vl.push_back(std::strtod(t.c_str(), NULL));
}

template<typename T>
void	PmergeMe::sort(T &vl)
{
	const int	thresh = 32;
	
	if (vl.size() <= thresh)
		insert(vl);
	else
		merge(vl);
}

template<typename T>
void	PmergeMe::insert(T &vl)
{
	T	svl;

	typename T::iterator	it;

	for (it = vl.begin(); it != vl.end(); ++it)
	{
		typename T::iterator	j = svl.begin();
        while (j != svl.end() && *j <= *it)
            ++j;
        svl.insert(j, *it);
	}

	vl = svl;
}

template<typename T>
void	PmergeMe::merge(T &vl)
{
	if (vl.size() <= 1)
		return;

	typename T::iterator mid = vl.begin();
	std::advance(mid, vl.size() / 2);

	T left(vl.begin(), mid);
	T right(mid, vl.end());

	merge(left);
	merge(right);

	typename T::iterator it = vl.begin();
	typename T::iterator lit = left.begin();
	typename T::iterator rit = right.begin();

	while (lit != left.end() && rit != right.end())
	{
		*lit < *rit ? *it = *lit : *it = *rit;
		*lit < *rit ? ++lit : ++rit;
		++it;
	}
	while (lit != left.end())
	{
		*it = *lit;
		++lit;
		++it;
	}
	while (rit != right.end())
	{
		*it = *rit;
		++rit;
		++it;
	}
}
