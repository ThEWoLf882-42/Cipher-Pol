/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:23:30 by agimi             #+#    #+#             */
/*   Updated: 2023/07/26 16:00:41 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(Brain const &b);
		virtual ~Brain(void);
		Brain	&operator=(Brain const &b);

		const std::string	getIdea(size_t i) const;
		const std::string	*getAdd(size_t i) const;
		void				setIdea(size_t i, std::string idea);
};