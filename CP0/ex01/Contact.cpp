/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:15:56 by agimi             #+#    #+#             */
/*   Updated: 2023/07/05 16:15:56 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f, std::string l, std::string n, std::string p, std::string s) :
	first(f), last(l), nick(n), phone(p), sec(s)
{
}

Contact::~Contact()
{
}

std::string	Contact::getfirst()
{
	return this->first;
}

std::string	Contact::getlast()
{
	return this->last;
}

std::string	Contact::getnick()
{
	return this->nick;
}

std::string	Contact::getphone()
{
	return this->phone;
}

std::string	Contact::getsec()
{
	return	this->sec;
}