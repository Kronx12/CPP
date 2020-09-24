/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:30:29 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 12:28:20 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>

void ZombieEvent::setZombieType(std::string ntype) { type = ntype; }

Zombie ZombieEvent::randomChump() {
    int rand = (std::rand() % 6);

    std::string names[6];
    names[0] = "Lulu";
    names[1] = "Titus";
    names[2] = "Mortits";
    names[3] = "Suka";
    names[4] = "Billy";
    names[5] = "Hat";

    Zombie tmp = newZombie(names[rand]);
    tmp.advert();
    return (tmp);
}

Zombie ZombieEvent::newZombie(std::string name) {
    Zombie ret = Zombie();
    ret.setName(name);
    ret.setType(type);
    return (ret);
}