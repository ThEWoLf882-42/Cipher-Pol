/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:46:39 by agimi             #+#    #+#             */
/*   Updated: 2023/09/25 14:35:44 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stack>

class	RPN
{
	private:
		RPN();
		std::stack<float>	rpn;
		std::string			in;
		void	read_in();
		void	cal();
	public:
		RPN(std::string const &inp);
		~RPN();
		RPN(RPN const &r);
		RPN	&operator=(RPN const &r);
		
};