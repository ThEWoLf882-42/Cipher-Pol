/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:20:21 by agimi             #+#    #+#             */
/*   Updated: 2023/07/12 21:44:29 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					fpn;
	static const int	frb;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &f);
	Fixed	&operator=(Fixed const &f);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif