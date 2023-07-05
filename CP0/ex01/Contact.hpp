/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:52:33 by agimi             #+#    #+#             */
/*   Updated: 2023/06/26 11:52:33 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	private:
		std::string	const first;
		std::string	const last;
		std::string	const nick;
		std::string	const phone;
		std::string	const sec;
	public:
		Contact(std::string f, std::string l, std::string n, std::string p, std::string s);
		~Contact(void);
		std::string getfirst(void) const;
		std::string getlast(void) const;
		std::string getnick(void) const;
		std::string getphone(void) const;
		std::string getsec(void) const;
};

#endif