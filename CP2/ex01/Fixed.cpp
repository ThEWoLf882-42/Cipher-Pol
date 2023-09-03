/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:11:01 by agimi             #+#    #+#             */
/*   Updated: 2023/08/15 14:43:52 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frb = 8;

Fixed::Fixed(void) :
	fpn(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int f) :
	fpn(f << frb)
{
	std::cout << "Int constructor called" << std::endl;	
}

Fixed::Fixed(const float f) :
	fpn(roundf(f * (1 << frb)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed	&Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(f.getRawBits());
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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

std::ostream	&operator<<(std::ostream &str, Fixed const &fn)
{
	return str << fn.toFloat();
}
