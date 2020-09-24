/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 13:55:02 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:33:54 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main() {
    ZombieHorde *horde = new ZombieHorde(5);
    horde->announce();
    delete horde;
    return (0);
}