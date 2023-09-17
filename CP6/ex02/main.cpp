/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:22:11 by agimi             #+#    #+#             */
/*   Updated: 2023/09/17 11:57:26 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	Base	*b;
	srand(time(0));
	int	i = rand() % 3;
	
	switch (i)
	{
	case 0:
		b = new	A;
		break;
	case 1:
		b = new	B;
		break;
	case 2:
		b = new	C;
		break;
	}
	return b;
}

void	identify(Base* p)
{
	std::string	type;

	if (dynamic_cast<A*>(p))
		std::cout << "Pointer Type is 'A'" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer Type is 'B'" << std::endl;
	else
		std::cout << "Pointer Type is 'C'" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Reference Type is 'A'" << std::endl;
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			B	&b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Reference Type is 'B'" << std::endl;
		}
		catch (std::bad_cast &bc)
		{
			std::cout << "Reference Type is 'C'" << std::endl;
		}
	}
}

int main()
{
	Base *b = generate();
	identify(b);
	identify(*b);
	
	delete b;
	return 0;
}