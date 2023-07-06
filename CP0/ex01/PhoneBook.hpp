/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:52:37 by agimi             #+#    #+#             */
/*   Updated: 2023/06/26 11:52:37 by agimi            ###   ########.fr       */
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