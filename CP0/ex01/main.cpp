#include "Contact.hpp"
#include "PhoneBook.hpp"

void	search(PhoneBook pb)
{
	return;
}

void	add(PhoneBook pb)
{
	return;
}

int	main()
{
	PhoneBook	pb;
	std::string	s;

	while (s != "EXIT")
	{
		std::cout << "PLease enter a valid command:\n	ADD\n	SEARCH\n	EXIT\n>>" << std::endl;
		std::getline(std::cin, s);
		if (s == "ADD")
			add(pb);
		else if (s = "SEARCH")
			search(pb);
 	}
}