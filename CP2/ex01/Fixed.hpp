/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:11:08 by agimi             #+#    #+#             */
/*   Updated: 2023/07/12 22:53:02 by agimi            ###   ########.fr       */
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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fn);

#endif