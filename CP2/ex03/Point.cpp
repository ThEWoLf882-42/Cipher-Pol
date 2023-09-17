/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:05:57 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) :
	x(0), y(0)
{
}

Point::Point(const float xf, const float yf) :
	x(xf), y(yf)
{
}

Point::Point(Point const &point)
{
	*this = point;
}

Point	&Point::operator=(Point const &point)
{
    (Fixed&)(x) = point.getX();
    (Fixed&)(y) = point.getY();
    
    return	*this;
}

Point::~Point(void)
{
}

const Fixed Point::getX() const
{
	return	this->x;
}

const Fixed Point::getY() const
{
	return	this->y;
}