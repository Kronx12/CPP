/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 09:29:07 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:41:39 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() :
    AWeapon("Power Fist", 8, 50) {}
    
PowerFist::PowerFist(const PowerFist &powerfist) :
    AWeapon(powerfist.getName(), powerfist.getAPCost(), powerfist.getDamage()) {}

PowerFist &PowerFist::operator=(const PowerFist &powerfist) {
    AWeapon::operator=(powerfist);
    return (*this);
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist() {}