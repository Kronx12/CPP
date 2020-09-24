/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:26:00 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:46:38 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string n) { name = n; }

// SETTER
void HumanB::setWeapon(const Weapon &w) { weapon = &w; }

void HumanB::attack() {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
