/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:32:49 by agimi             #+#    #+#             */
/*   Updated: 2023/09/21 16:17:15 by agimi            ###   ########.fr       */
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

int	Span::shortestSpan()
{
    if (v.size() <= 1)
        throw std::out_of_range("Span is not large enough");

    int span;
    int sho = INT_MAX;
    std::sort(v.begin(), v.end());

    for (size_t i = 1; i < v.size(); ++i)
    {
        span = v[i] - v[i - 1];
        if (span < sho)
            sho = span;
    }

    return  sho;
}

int Span::longestSpan()
{
    if (v.size() <= 1)
        throw std::out_of_range("Span is not large enough");
    
    std::sort(v.begin(), v.end());
    return  v[v.size() - 1] - v[0];
}