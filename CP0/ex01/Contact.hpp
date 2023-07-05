/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:15:59 by agimi             #+#    #+#             */
/*   Updated: 2023/07/05 16:15:59 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		std::string		first;
		std::string		last;
		std::string		nick;
		std::string		phone;
		std::string		sec;
	public:
		Contact(void);
		Contact(std::string f, std::string l, std::string n, std::string p, std::string s);
		~Contact(void);
		std::string getfirst(void);
		std::string getlast(void);
		std::string getnick(void);
		std::string getphone(void);
		std::string getsec(void);
};

#endif