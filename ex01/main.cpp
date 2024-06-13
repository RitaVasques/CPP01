/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:07:22 by ritavasques       #+#    #+#             */
/*   Updated: 2024/06/13 20:14:19 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie* horde;

    horde = zombieHorde( 5, "Zog");
    for (int i = 0; i < 5; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}
