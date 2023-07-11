/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:22:12 by agimi             #+#    #+#             */
/*   Updated: 2023/07/11 15:53:13 by agimi            ###   ########.fr       */
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
		Zombie(void);
		Zombie(std::string n);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string	n);
};

Zombie*	zombieHorde(int N, std::string name);

#endif