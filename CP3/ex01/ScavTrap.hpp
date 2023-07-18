/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:17:49 by agimi             #+#    #+#             */
/*   Updated: 2023/07/16 13:30:46 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		bool	gkm;
	public:
		ScavTrap(void);
		ScavTrap(std::string n);
		ScavTrap(ScavTrap const &st);
};

#endif