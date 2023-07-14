/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:06:06 by agimi             #+#    #+#             */
/*   Updated: 2023/07/14 12:42:56 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	x;
		Fixed const y;
	public:
		Point(void);
		Point(const float xf, const float yf);
		Point(Point const &point);
		Point	&operator=(Point const &point);
		~Point(void);
		const Fixed getX() const;
		const Fixed getY() const;
};

std::ostream	&operator<<(std::ostream &str, Point const &point);

#endif