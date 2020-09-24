/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:30:01 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:20:37 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int main() {
    ZombieEvent *factory = new ZombieEvent();

    factory->setZombieType("Vert");
    Zombie zombie1 = factory->randomChump();
    factory->setZombieType("Bleu");
    Zombie zombie2 = factory->randomChump();
    factory->setZombieType("Red");
    Zombie zombie3 = factory->randomChump();

    delete factory;
    return (0);
}