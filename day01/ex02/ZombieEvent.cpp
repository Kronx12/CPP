/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:30:29 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 13:52:08 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <time.h>

void ZombieEvent::setZombieType(std::string ntype) {
    type = ntype;
}

Zombie *ZombieEvent::randomChump() {
	struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);
    int rand = std::rand()%6;
    std::string names[6];
    names[0] = "Lulu";
    names[1] = "Titus";
    names[2] = "Mortits";
    names[3] = "Suka";
    names[4] = "Bliat";
    names[5] = "Ska";

    Zombie *tmp = newZombie(names[rand]);
    tmp->announce();
    return (tmp);
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *ret = new Zombie();
    ret->setName(name);
    ret->setType(type);
    return (ret);
}