/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:46:20 by agimi             #+#    #+#             */
/*   Updated: 2023/09/25 14:35:29 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string const &inp) :
	in(inp)
{
	read_in();
	cal();
}

RPN::~RPN()
{
}

RPN::RPN(RPN const &r)
{
	*this = r;
}

RPN	&RPN::operator=(RPN const &r)
{
	if (this != &r)
	{
		in = r.in;
		rpn = r.rpn;
	}
	return	*this;
}

void	error(std::string	err)
{
	std::cerr << err << std::endl;
	exit(1);
}

bool	isoperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return	true;
	return	false;
}

void	RPN::read_in()
{
	std::istringstream	s(in);
	std::string			t;
	while (s >> t)
	{
		if (t.size() == 1 && !isdigit(t[0]) && !isoperator(t[0]))
			error("Error");
		else if (t.size() > 1)
			if (((t[0] == '+' || t[0] == '-') && !isdigit(t[1])) || !isdigit(t[0]))
				error("Error");
	}
}

void	RPN::cal()
{
	std::stringstream	s(in);
	std::string			t;

	while (s >> t)
	{
		if(isdigit(t[0]))
			rpn.push(std::atof(t.c_str()));
		else if (t.size() == 1 && isoperator(t[0]))
		{
			if (rpn.size() < 2)
				error("Error");
		
			float	a = rpn.top();
			rpn.pop();
			float	b = rpn.top();
			rpn.pop();

			switch (t[0])
			{
				case '+':
					rpn.push(b + a);
					break;
				case '-':
					rpn.push(b - a);
					break;
				case '*':
					rpn.push(b * a);
					break;
				case '/':
					if (a == 0.0f)
						error("Error: Division by zero");
					rpn.push(b / a);
					break;
			}
		}
		else
			error("Error: Invalid token");
	}
	if (rpn.size() != 1)
		error("Error: Incomplete expression");
	
	std::cout << rpn.top() << std::endl;
}
