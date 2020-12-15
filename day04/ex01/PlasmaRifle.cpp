/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:55:44 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:41:03 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
    AWeapon("Plasma Rifle", 5, 21) {}
    
PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmarifle) :
    AWeapon(plasmarifle.getName(), plasmarifle.getAPCost(), plasmarifle.getDamage()) {}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmarifle) {
    AWeapon::operator=(plasmarifle);
    return (*this);
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {}