/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 10:59:16 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 11:16:20 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Break everything!" << std::endl;
}
SuperMutant::SuperMutant(const SuperMutant &sm) : Enemy(sm.getHP(), sm.getType()) {
    std::cout << "Gaaah. Break everything!" << std::endl;
}
SuperMutant &SuperMutant::operator=(const SuperMutant &sm) {
    Enemy::operator=(sm);
    std::cout << "Gaaah. Break everything!" << std::endl;
    return (*this);
}

void SuperMutant::takeDamage(int dmg) {
    dmg -= 3;
    Enemy::takeDamage(dmg);
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaaargh ..." << std::endl;
}