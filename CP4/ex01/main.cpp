/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:05:38 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 14:36:42 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void	test()
{
	Animal	*ani[100];
	
	for (size_t i = 0; i < 100; i++)
	{
		if (i < 50)
			ani[i] = new Dog();
		else
			ani[i] = new Cat();
	}
	
	for (size_t i = 0; i < 100; i++)
		std::cout << ani[i]->getType() << std::endl;
		
	for (size_t i = 0; i < 100; i++)
		delete ani[i];

}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	
	test();
	// system("leaks brain");

	return	0;
}