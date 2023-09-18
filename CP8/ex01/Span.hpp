/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:32:36 by agimi             #+#    #+#             */
/*   Updated: 2023/09/18 16:05:15 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class	Span
{
	private:
		unsigned int		n;
		std::vector<int>	v;
		Span();
	public:
		~Span();
		Span(unsigned int N);
		Span(Span const &s);
		Span	&operator=(Span const &s);
		
		void	addNumber(int i);
		void	addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e);
		void	addNumber(int st, int en);
		int		shortestSpan();
		int		longestSpan();
};