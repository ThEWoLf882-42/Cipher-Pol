/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:03:36 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 13:15:30 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string	ScalarConverter::t = "";

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &s)
{
	*this = s;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &s)
{
	(void)s;
	return	*this;
}

void	ScalarConverter::convert(std::string &in)
{
	char	*s;

	std::strtod(in.c_str(), &s);
	
	if (*s && in.length() == 1)
		t = "char";
	else if (!*s)
		t = "int";
	else if (in.back() == 'f')
	{
		in.erase(in.size() - 1);
		t = "float";
	}
	else
		t = "double";
	std::cout << std::fixed << std::setprecision((in.find('.') != std::string::npos) ? in.length() - in.find('.') - 1 : 1);
	s_char(in);
	s_int(in);
	s_float(in);
	s_double(in);
}

void	ScalarConverter::s_char(std::string const &in)
{
	char	*s;
	double	d;

	std::cout << "char: ";
	if (in == "nan" || in == "nanf")
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (t == "char")
	{
		if(std::isprint(in.front()))
			std::cout << "'" << static_cast<char>(in.front()) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		return ;
	}
	d = std::strtod(in.c_str(), &s);
	if (*s)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(d > CHAR_MAX || d < CHAR_MIN)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else if(std::isprint(d))
		std::cout  << "'" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	ScalarConverter::s_int(std::string const &in)
{
	char	*s;
	double	d;

	std::cout << "int: ";
	if (in == "nan" || in == "nanf")
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(t == "char")
	{
		std::cout << static_cast<int>(in.front()) << std::endl;
		return ;
	}
	d = std::strtod(in.c_str(), &s);
	if (*s)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(d > INT_MAX || d < INT_MIN)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else
		std::cout << static_cast<int>(d) << std::endl;
}

void	ScalarConverter::s_float(std::string const &in)
{
	char	*s;
	double	d;
	
	std::cout << "float: ";
	if (in == "nan" || in == "nanf")
	{
		std::cout << "nanf" << std::endl;
		return ;
	}
	if (t == "char")
	{
		std::cout << static_cast<float>(in.front()) << "f" << std::endl;
		return ;
	}
	d = std::strtod(in.c_str(), &s);
	if (*s)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(d > FLT_MAX || d < -FLT_MAX)
	{
		if(d > FLT_MAX)
			std::cout << "+";
		else
			std::cout << "-";
		std::cout << "inff" << std::endl;
		return ;
	}
	else
		std::cout << static_cast<float>(d) << "f" << std::endl;
}

void	ScalarConverter::s_double(std::string const &in)
{
	char	*s;
	double	d;
	
	std::cout << "double: ";
	if (in == "nan" || in == "nanf")
	{
		std::cout << "nan" << std::endl;
		return ;
	}
	if (t == "char")
	{
		std::cout << static_cast<double>(in.front()) << std::endl;
		return ;
	}
	d = std::strtod(in.c_str(), &s);
	if (*s)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if(d > DBL_MAX || d < -DBL_MAX)
	{
		if(d > DBL_MAX)
			std::cout << "+";
		else
			std::cout << "-";
		std::cout << "inf" << std::endl;
		return ;
	}
	else
		std::cout << static_cast<double>(d) << std::endl;
}