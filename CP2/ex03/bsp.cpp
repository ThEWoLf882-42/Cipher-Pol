/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:06:39 by agimi             #+#    #+#             */
/*   Updated: 2023/07/14 16:10:58 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed	d1;
	Fixed	d2;

	d1 = ((a.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
			+ ((p.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat() - a.getX().toFloat()))
			- (p.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())))
		/ (((b.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat() - a.getX().toFloat()))
			- ((b.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat())));
	d2 = (p.getY().toFloat() - a.getY().toFloat() - (d1 * (b.getY().toFloat() - a.getY().toFloat()))) / (c.getY().toFloat() - a.getY().toFloat());
	
	if (d1 > 0 && d2 > 0 && (d1 + d2) < 1)
		return	true;
	else
		return	false;
}