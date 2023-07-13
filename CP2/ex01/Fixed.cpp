/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:11:01 by agimi             #+#    #+#             */
/*   Updated: 2023/07/12 22:54:02 by agimi            ###   ########.fr       */
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
	fpn(f)
{
	std::cout << "Int constructor called" << std::endl;	
}

Fixed::Fixed(const float f) :
	fpn(std::roundf(f))
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
	return (std::round(this->fpn));
}

int		Fixed::toInt(void) const
{
	return (std::round(this->fpn));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fn)
{
	return str << fn.toFloat();
}