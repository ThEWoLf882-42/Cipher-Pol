/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:58:42 by agimi             #+#    #+#             */
/*   Updated: 2023/07/07 16:45:43 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string n, Weapon &w);
		~HumanA(void);
		void	attack(void);
};

#endif