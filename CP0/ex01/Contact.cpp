#include "Contact.hpp"

Contact::Contact(std::string f, std::string l, std::string n, std::string p, std::string s) :
	first(f), last(l), nick(n), phone(p), sec(s)
{
}

Contact::~Contact()
{
}

std::string	Contact::getfirst() const
{
	return this->fist;
}

std::string	Contact::getlast() const
{
	return this->last;
}

std::string	Contact::getnick() const
{
	return this->nick;
}

std::string	Contact::getphone() const
{
	return this->phone;
}

std::string	Contact::getsec() const
{
	return	this->sec;
}