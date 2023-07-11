/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:43:32 by agimi             #+#    #+#             */
/*   Updated: 2023/07/11 15:39:33 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string n);
		~Zombie(void);
		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif