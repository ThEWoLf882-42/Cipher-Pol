/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:10:54 by agimi             #+#    #+#             */
/*   Updated: 2023/07/07 16:46:44 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string n);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &w);
};

#endif