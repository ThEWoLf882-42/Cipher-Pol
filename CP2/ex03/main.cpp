/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:05:39 by agimi             #+#    #+#             */
/*   Updated: 2023/07/14 16:07:24 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iomanip>

bool			bsp(Point const a, Point const b, Point const c, Point const p);

int main(void)
{
	Point const a(10, 8);
	Point const b(6, 6);
	Point const c(16, 2);
	Point const point(12, 6);

	std::cout << 
	"The point(x= " << std::setw(5) << std::left << point.getX() << "\ty= " << std::setw(5) << std::left << point.getY() << ")\n" <<
	"\ta(x= " << std::setw(5) << std::left << a.getX() << "\ty= " << std::setw(5) << std::left << a.getY() << ")\n" <<
	"\tb(x= " << std::setw(5) << std::left << b.getX() << "\ty= " << std::setw(5) << std::left << b.getY() << ")\n" <<
	"\tc(x= " << std::setw(5) << std::left << c.getX() << "\ty= " << std::setw(5) << std::left << c.getY() << ")\n" << std::endl;
	
	if (bsp(a, b, c, point) == true)
		std::cout << "\033[32mTRUE\033[0m" << std::endl;
	else
		std::cout << "\033[31mFALSE\033[0m" << std::endl;

	return (0);
}