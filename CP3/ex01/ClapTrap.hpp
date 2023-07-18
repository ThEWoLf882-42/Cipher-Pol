/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:11:49 by agimi             #+#    #+#             */
/*   Updated: 2023/07/16 13:21:16 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:
		std::string		name;
		unsigned int	HP;
		unsigned int	EP;
		unsigned int	AD;
	public:
		ClapTrap(void);
		ClapTrap(std::string n);
		ClapTrap(ClapTrap const &ct);
		~ClapTrap(void);
		ClapTrap	&operator=(ClapTrap const ct);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif