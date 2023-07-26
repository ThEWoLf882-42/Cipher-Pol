/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:07:26 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 15:51:15 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(Animal const &a);
		virtual ~Animal(void);
		Animal	&operator=(Animal const &a);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};