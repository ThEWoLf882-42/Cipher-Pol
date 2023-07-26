/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:23:52 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 16:01:49 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"
#include "Animal.hpp"

class	Dog : public Animal
{
	private:
		Brain	*br;
	public:
		Dog(void);
		Dog(Dog const &d);
		~Dog(void);
		Dog	&operator=(Dog const &d);
		
		void		makeSound(void) const;
		std::string	getType(void) const;
		void		getIdeas(void) const;
		void		setIdea(size_t i, std::string idea);
};