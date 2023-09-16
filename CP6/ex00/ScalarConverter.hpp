/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:56:35 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 12:11:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cfloat>

class ScalarConverter 
{
	private:
		static std::string	t;
		
		ScalarConverter(void);

		static	void	s_char(std::string const &in);
		static	void	s_int(std::string const &in);
		static	void	s_float(std::string const &in);
		static	void	s_double(std::string const &in);
	public:
		~ScalarConverter(void);
		ScalarConverter(ScalarConverter const &s);
		ScalarConverter	&operator=(ScalarConverter const &s);

		static void	convert(std::string &in);
};
