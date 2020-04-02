/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:30:01 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 13:43:31 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int main() {
    ZombieEvent *factory = new ZombieEvent();

    factory->setZombieType("Vert");
    Zombie *zombie1 = factory->randomChump();
    factory->setZombieType("Bleu");
    Zombie *zombie2 = factory->randomChump();
    Zombie *zombie3 = factory->randomChump();

    delete zombie1;
    delete zombie2;
    delete zombie3;
    delete factory;
    return (0);
}