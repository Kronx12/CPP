/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 10:59:16 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:46:58 by gbaud            ###   ########lyon.fr   */
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
    Enemy::takeDamage(dmg - 3);
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaaargh ..." << std::endl;
}