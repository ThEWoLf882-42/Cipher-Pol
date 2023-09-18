/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:32:49 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 17:18:09 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : n(N)
{
}

Span::Span(Span const &s)
{
    *this = s;
}

Span &Span::operator=(Span const &s)
{
    if (this != &s)
    {
        n = s.n;
        v = s.v;
    }
    return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int i)
{
    if (v.size() < n)
        v.push_back(i);
    else
        throw std::out_of_range("Span is full");
}

void	Span::addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
    if (v.size() + std::distance(b, e) > n)
        throw std::out_of_range("Span is full");
    v.insert(v.end(), b, e);
}

void	Span::addNumber(int st, int en)
{
	if (v.size() + abs(en - st) > n)
		throw std::out_of_range("Span is full");
	for (int i = (st < en ? st : en); i != (st < en ? en : st); i++)
	{	std::cout << i << std::endl;
		v.push_back(i);}
}

int	Span::shortestSpan()
{
    if (v.size() < 2)
        throw std::out_of_range("Span is not large enough");
    std::vector<int> t = v;
    std::sort(t.begin(), t.end());
    std::vector<int>::iterator i;
    int shor = t.at(1) - t.at(0);
    for (i = t.begin() ; i != t.end(); ++i)
    {
        if (shor > *i - *(i - 1))
            shor = *i - *(i - 1);
    }
    return (shor);
}

int Span::longestSpan()
{
    if (v.size() < 2)
        throw std::out_of_range("Span is not large enough");
    int mx = *std::max_element(v.begin(), v.end());
    int mi = *std::min_element(v.begin(), v.end());
    return (mx - mi);
}