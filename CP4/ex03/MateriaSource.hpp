/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:51:29 by agimi             #+#    #+#             */
/*   Updated: 2023/07/27 08:56:26 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*inv[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &ic);
		~MateriaSource(void);
		MateriaSource	&operator=(MateriaSource const &ma);
		
		void		learnMateria(AMateria *ma);
		AMateria*	createMateria(std::string const & type);
};