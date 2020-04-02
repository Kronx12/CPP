/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:26:00 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 04:59:10 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string n) {
    name = n;
}

void HumanB::setWeapon(const Weapon &w) {
    weapon = &w;
}

void HumanB::attack() {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}