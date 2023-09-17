/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:03:36 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 16:46:21 by agimi            ###   ########.fr       */
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

void	ScalarConverter::convert(std::string const &in) {
	std::cout << "char: ";
	try
	{
		char c = s_char(in);
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}

	std::cout << "int: ";
	try
	{
		int i = s_int(in);
		std::cout << i << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}

	std::cout << "float: ";
	try
	{
		float f = s_float(in);
		std::cout << std::fixed << std::setprecision(getPrecision(in)) << f << "f" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << (nan(in) ? "nanf" : "impossible") << std::endl;
	}

	std::cout << "double: ";
	try
	{
		double d = s_double(in);
		std::cout << std::fixed << std::setprecision(getPrecision(in)) << d << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << (nan(in) ? "nan" : "impossible") << std::endl;
	}
}

char	ScalarConverter::s_char(std::string const &in)
{
	if (s_double(in) || s_double(in) == 0)
		return	static_cast<char>(s_double(in));
	else 
		throw	std::invalid_argument("Invalid char conversion");
}

int	ScalarConverter::s_int(std::string const &in)
{
	try
	{
		if (nan(in))
			throw std::invalid_argument("Invalid int conversion");
		return	static_cast<int>(s_double(in));
	}
	catch (const std::exception &e)
	{
		throw std::invalid_argument("Invalid int conversion");
	}
}

float	ScalarConverter::s_float(std::string const &in)
{
	try
	{
		return	static_cast<float>(s_double(in));
	}
	catch (const std::exception &e)
	{
		throw std::invalid_argument("Invalid float conversion");
	}
}

double	ScalarConverter::s_double(std::string const &in)
{
	char	*s;
	try
	{
		double	d = std::strtod(in.c_str(), &s);
		if (*s && (*s != 'f' || (*s == 'f' && strlen(s) > 1)))
			throw std::exception();
		return	d;
	}
	catch (const std::exception &e)
	{
		throw std::invalid_argument("Invalid double conversion");
	}
}

int	ScalarConverter::getPrecision(std::string const &in)
{
	size_t dotPos = in.find('.');
	if (dotPos != std::string::npos)
		return	in.length() - dotPos - 1;
	else
		return	1;
}

bool	ScalarConverter::nan(std::string const &in)
{
	char		*s;

	if (in == "nan" || in == "nanf")
		return	true;
	if (in.size() > 1)
	{
		std::strtod(in.c_str(), &s);
		if (*s && (*s != 'f' || (*s == 'f' && strlen(s) > 1)))
			return	false;
	}
	return	false;
}