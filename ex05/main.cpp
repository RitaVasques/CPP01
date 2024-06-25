/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:46:28 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/25 19:16:10 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void )
{
    Harl Harl;
    std::string level;
    
    while (1) 
    {
        std::cout <<std::endl;
        std::cout << "Enter level: DEBUG, INFO, WARNING, ERROR, EXIT" << std::endl;
        std::cout <<std::endl;
        std::getline(std::cin, level);
        if (level == "EXIT")
            break ;
        Harl.complain( level );
    }
    return (0);
}
