/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:41:13 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/13 14:02:14 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) 
{
    Zombie *zigZag;
    
    zigZag = new Zombie("zigZag");
    zigZag->announce();
    
    randomChump("Zog");
    
    delete zigZag;
    return (0);
}
