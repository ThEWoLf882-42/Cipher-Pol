/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:48:01 by agimi             #+#    #+#             */
/*   Updated: 2023/07/27 11:28:05 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		AMateria	*inv[4];
		std::string	name;
	public:
		Character(std::string const &n);
		Character(Character const &ch);
		~Character(void);
		Character	&operator=(Character const &ch);

		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		
		AMateria	*getMateria(int idx);
};