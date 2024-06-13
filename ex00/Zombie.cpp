/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:41:45 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/13 14:02:55 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//CONSTRUCTOR
Zombie::Zombie( std::string name ) {
    this->name = name;
}

//DESTRUCTOR
Zombie::~Zombie( void ) {
    std::cout << Zombie::getName() << " was destroyed" << std::endl;
}

std::string Zombie::getName( void ) {
    return this->name;
}

void Zombie::announce( void ) {
    std::cout << Zombie::getName() << " :BraiiiiiiinnnzzzZ..." << std::endl;
}
