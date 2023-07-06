/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:43:03 by agimi             #+#    #+#             */
/*   Updated: 2023/07/06 19:43:03 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <Contact.hpp>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact	c[8];
		size_t	n;
};

#endif