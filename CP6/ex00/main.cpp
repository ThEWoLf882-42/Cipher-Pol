/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:32:16 by agimi             #+#    #+#             */
/*   Updated: 2023/09/16 11:32:57 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) 
{
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <input_literal>" << std::endl;
        return 1;
    }

    ScalarConverter::convert(argv[1]);

    return 0;
}