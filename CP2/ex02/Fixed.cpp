/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:58:56 by agimi             #+#    #+#             */
/*   Updated: 2023/07/13 14:50:09 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frb = 8;

Fixed::Fixed(void) :
	fpn(0)
{
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const int f) :
	fpn(f << frb)
{
}

Fixed::Fixed(const float f) :
	fpn(roundf(f * (1 << frb)))
{
}

Fixed::Fixed(Fixed const &f)
{
	*this = f;
}

Fixed	&Fixed::operator=(Fixed const &f)
{
	setRawBits(f.getRawBits());
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return this->fpn;
}

void	Fixed::setRawBits(int const raw)
{
	this->fpn = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fpn / (float)(1 << frb));
}

int		Fixed::toInt(void) const
{
	return (fpn >> frb);
}


bool	Fixed::operator>(Fixed const &f)
{
	return	toFloat() > f.toFloat();
}

bool	Fixed::operator<(Fixed const &f)
{
	return	toFloat() < f.toFloat();
}

bool	Fixed::operator>=(Fixed const &f)
{
	return	toFloat() >= f.toFloat();
}

bool	Fixed::operator<=(Fixed const &f)
{
	return	toFloat() <= f.toFloat();
}

bool	Fixed::operator==(Fixed const &f)
{
	return	toFloat() == f.toFloat();
}

bool	Fixed::operator!=(Fixed const &f)
{
	return	toFloat() != f.toFloat();
}

float	Fixed::operator+(Fixed const &f)
{
	return	toFloat() + f.toFloat();
}

float	Fixed::operator-(Fixed const &f)
{
	return	toFloat() - f.toFloat();
}

float	Fixed::operator*(Fixed const &f)
{
	return	toFloat() * f.toFloat();
}

float	Fixed::operator/(Fixed const &f)
{
	return	toFloat() / f.toFloat();
}

Fixed	Fixed::operator++()
{
	fpn++;
	return *this;
}

Fixed	Fixed::operator--()
{
	fpn--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	t = *this;
	fpn++;
	return t;
}

Fixed	Fixed::operator--(int)
{
	Fixed	t = *this;
	fpn--;
	return t;
}

const Fixed	&Fixed::min(Fixed const &fi,Fixed const &se)
{
	if ((Fixed)fi <= (Fixed)se)
		return fi;
	else
		return se;
}

Fixed	&Fixed::min(Fixed &fi, Fixed &se)
{
	if (fi <= se)
		return fi;
	else
		return se;
}

const Fixed	&Fixed::max(Fixed const &fi,Fixed const &se)
{
	if ((Fixed)fi >= (Fixed)se)
		return fi;
	else
		return se;
}

Fixed	&Fixed::max(Fixed &fi, Fixed &se)
{
	if (fi >= se)
		return fi;
	else
		return se;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fn)
{
	return str << fn.toFloat();
}