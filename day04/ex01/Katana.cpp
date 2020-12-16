/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Katana.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:20:53 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:25:24 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Katana.hpp"

Katana::Katana() :
    AWeapon("Katana", 3, 25) {}
    
Katana::Katana(const Katana &katana) :
    AWeapon(katana.getName(), katana.getAPCost(), katana.getDamage()) {}

Katana &Katana::operator=(const Katana &katana) {
    AWeapon::operator=(katana);
    return (*this);
}

void Katana::attack() const {
    std::cout << "~~~ Krouching" << std::endl;
}

Katana::~Katana() {}