/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:59:02 by agimi             #+#    #+#             */
/*   Updated: 2023/07/13 14:49:17 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
private:
	int					fpn;
	static const int	frb;
public:
	Fixed(void);
	Fixed(const int f);
	Fixed(const float f);
	~Fixed(void);
	Fixed(Fixed const &f);
	Fixed	&operator=(Fixed const &f);
	
	bool	operator>(Fixed const &f);
	bool	operator<(Fixed const &f);
	bool	operator>=(Fixed const &f);
	bool	operator<=(Fixed const &f);
	bool	operator==(Fixed const &f);
	bool	operator!=(Fixed const &f);
	
	float	operator+(Fixed const &f);
	float	operator-(Fixed const &f);
	float	operator*(Fixed const &f);
	float	operator/(Fixed const &f);
	
	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed		&min(Fixed &fi, Fixed &se);
	static const Fixed	&min(Fixed const &fi,Fixed const &se);
	static Fixed		&max(Fixed &fi, Fixed &se);
	static const Fixed	&max(Fixed const &fi,Fixed const &se);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fn);

#endif