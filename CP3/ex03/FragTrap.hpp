/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:25:01 by agimi             #+#    #+#             */
/*   Updated: 2023/07/18 19:06:51 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string n);
		FragTrap(FragTrap const &ft);
		~FragTrap(void);
		FragTrap	&operator=(FragTrap const &st);

	void	attack(const std::string& target);
	void	highFivesGuys(void);
};

#endif