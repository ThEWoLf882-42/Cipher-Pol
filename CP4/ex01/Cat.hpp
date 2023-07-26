/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:39:35 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 16:01:31 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "Animal.hpp"

class	Cat : public Animal
{
	private:
		Brain	*br;
	public:
		Cat(void);
		Cat(Cat const &c);
		~Cat(void);
		Cat	&operator=(Cat const &c);
		
		void		makeSound(void) const;
		std::string	getType(void) const;
		void		getIdeas(void) const;
		void		setIdea(size_t i, std::string idea);
};