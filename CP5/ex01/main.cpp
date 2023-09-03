/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:04:07 by agimi             #+#    #+#             */
/*   Updated: 2023/08/14 19:55:40 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Form form0("69", 0, 5);
			std::cout << form0 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}

	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Bureaucrat gimi("Gimi", 15);
			Form form("T88", 20, 45);
			std::cout << gimi << std::endl;
			std::cout << form << std::endl;
			gimi.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n --------------------- \n\n";

	{
		try
		{
			Bureaucrat sid("Sidqi", 35);
			Form form2("G848", 20, 45);
			std::cout << sid << std::endl;
			std::cout << form2 << std::endl;
			sid.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}