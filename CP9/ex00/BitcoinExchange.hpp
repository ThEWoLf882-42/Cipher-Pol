/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:44:42 by agimi             #+#    #+#             */
/*   Updated: 2023/09/24 13:20:37 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdexcept>

class	BitcoinExchange
{
	private:
		std::ifstream					file;
		std::map<std::string, double>	m;
		int								ln;
		BitcoinExchange();
		void	init_data();
		void	read_input();
		void	parse(std::string const l);
		int		line_check(std::string const &l, int in);
		int		month_date(int year, int month);
		int		check_date(const std::string& da);
		double	gprice(std::string da);
		void	throw_lin();
	public:
		BitcoinExchange(std::string	const &f);
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &b);
		
		BitcoinExchange	&operator=(BitcoinExchange const &b);

};