/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 09:21:10 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 13:53:39 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <time.h>

void randomName(Zombie *zombie) {
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
    zombie->setName(names[rand]);
}

ZombieHorde::ZombieHorde(int n) {
    zombies = new Zombie[n];
    for (int i = 0; i < n; i++)
        randomName(&zombies[i]);
    count = n;
}

ZombieHorde::~ZombieHorde() {
    delete [] zombies;
}

void ZombieHorde::announce() {
    for (int i = 0; i < count; i++)
        zombies[i].announce();
}
