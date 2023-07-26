/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:47:19 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 18:48:19 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Ice : public AMateria
{
	private:
		std::string	type;
	public:
		Ice(void);
		Ice(Ice const &ic);
		~Ice(void);
		Ice	&operator=(Ice const &ic);
		
		std::string const & getType() const;
		Ice		*clone() const;
		void	use(ICharacter& target);
};