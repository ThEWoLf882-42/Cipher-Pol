/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:30:37 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 18:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Cure : public AMateria
{
	private:
		std::string	type;
	public:
		Cure(void);
		Cure(Cure const &cu);
		~Cure(void);
		Cure	&operator=(Cure const &cu);
		
		std::string const & getType() const;
		Cure	*clone() const;
		void	use(ICharacter& target);
};