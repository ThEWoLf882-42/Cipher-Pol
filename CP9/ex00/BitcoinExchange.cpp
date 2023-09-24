/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:44:34 by agimi             #+#    #+#             */
/*   Updated: 2023/09/24 13:21:41 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : ln(0)
{
}

BitcoinExchange::BitcoinExchange(std::string const &f) :
	file(f), ln(0)
{
	if (file.is_open())
	{
		init_data();
		read_input();
	}
	else
	{
		std::cerr << "Unable to open file" << std::endl;
		exit(1);
	}
}

BitcoinExchange::~BitcoinExchange()
{
	file.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &b)
{
	*this = b;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &b)
{
	if (this != &b)
		m = b.m;
	return	*this;
}

double	BitcoinExchange::gprice(std::string da)
{
	std::map<std::string, double>::iterator it = m.lower_bound(da);
	if (it != m.begin()) {
		if (it->first != da)
			--it;
		return it->second;
	}
	return it->second;
}

int BitcoinExchange::check_date(const std::string& da)
{
	if (da.length() != 10 || da[4] != '-' || da[7] != '-')
		return 1;

	int	year_i = std::atoi(da.substr(0, 4).c_str());
	int	month_i = std::atoi(da.substr(5, 2).c_str());
	int	day_i = std::atoi(da.substr(8, 2).c_str());

	std::time_t	t = std::time(0);
	std::tm		*now = std::localtime(&t);
	int			year_now = now->tm_year + 1900;

	if (year_i > year_now || year_i < 2009)
		return 1;

	if (month_i < 1 || month_i > 12)
		return 1;

	int days_in_month = month_date(year_i, month_i);

	if (day_i < 1 || day_i > days_in_month)
		return 1;

	return 0;
}

int BitcoinExchange::month_date(int year, int month)
{
	static const int	daysInMonth[] = 
						{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int days = daysInMonth[month];

	if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
		days = 29;

	return days;
}

int	BitcoinExchange::line_check(std::string const &l, int in)
{
	std::string da;
	std::string pr;

	std::istringstream ss(l);

	if (in == 0)
		ss >> da >> pr >> pr;
	else 
	{
		std::getline(ss, da, ',');
		std::getline(ss, pr, ',');
		
		da.erase(std::remove(da.begin(), da.end(), ' '), da.end());
		pr.erase(std::remove(pr.begin(), pr.end(), ' '), pr.end());
	}

	if (da.empty() || pr.empty())
		throw std::invalid_argument("Error: Bad input => " + (da.empty() ? pr : da));

	try
	{
		char* not_digit;
		std::strtod(da.c_str(), &not_digit);
		if (*not_digit != '\0' && *not_digit != '-')
			throw std::invalid_argument("Error: Bad date input");
		
		if (check_date(da))
			throw std::invalid_argument("Error: Bad date input");
		
		char	*crumbs;
		double	pr_d = std::strtod(pr.c_str(), &crumbs);
		if (*crumbs != '\0')
			throw std::invalid_argument("Error: Bad price input");

		if (pr_d < 0)
			throw std::invalid_argument("Error: Not a positive number");

		if (pr_d > 1000 && in == 0)
			throw std::invalid_argument("Error: Too large a number");
	}
	catch (const std::invalid_argument& e)
	{
		throw std::invalid_argument(std::string(e.what()));
	}

	return 0;
}

void	BitcoinExchange::parse(std::string const l)
{
	line_check(l, 1);
	std::stringstream	s(l);
	std::string			da, pr;

	if (std::getline(s, da, ',') && std::getline(s, pr, ','))
	{
		da.erase(std::remove(da.begin(), da.end(), ' '), da.end());
		pr.erase(std::remove(pr.begin(), pr.end(), ' '), pr.end());
		m.insert(std::make_pair(da, std::strtod(pr.c_str(), NULL)));
	}
	else 
		throw_lin();
}

void	BitcoinExchange::init_data()
{
	std::ifstream	data("data.csv");
	if (!data.is_open())
	{
		std::cerr << "Error: could not open database file." << std::endl;
		exit(1);
	}

	std::string l;
	if (std::getline(data, l) && l != "date,exchange_rate")
	{
		std::cerr << "Error: Bad file format" << std::endl;
		exit(1);
	}
	
	while (std::getline(data, l))
	{
		try
		{
			parse(l);
		}
		catch (const std::exception& e)
		{
			std::cerr << "Data error: " << e.what() << std::endl;
			exit(1);
		}
	}

	data.close();
}

void	BitcoinExchange::throw_lin()
{
	std::string sln;
	std::stringstream t;
	t << ln;
	t >> sln;
	throw std::runtime_error("Invalid data format in line: " + sln);
}

void	BitcoinExchange::read_input()
{
	std::string l;
	
	if (file.is_open())
	{
		std::getline(file, l);
		ln++;
		if (l != "date | value")
		{
			std::cerr << "Error: Bad file format" << std::endl;
			exit(1);
		}
		while (std::getline(file, l))
		{
			ln++;
			try
			{
				line_check(l, 0);

				std::stringstream	ss(l);
				std::string			da;
				std::string			pr;
				ss >> da;
				ss >> pr;
				if (pr != "|")
					throw_lin();
				ss >> pr;

				std::cout << da << " => " << pr << " = ";
				double	t = gprice(da);

				std::cout << t * std::strtod(pr.c_str(), NULL) << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		file.close();
	}
	else
	{
		std::cerr << "Unable to open file" << std::endl;
		exit(1);
	}
}