/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:48:18 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 12:15:35 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &pname) : name(pname) { ap = 40; }
Character::Character(const Character &carac) : name(carac.getName()) { ap = 40; }
Character &Character::operator=(const Character &carac) {
    name = carac.getName();
    ap = carac.ap;
    return (*this);
}

const std::string Character::getName() const { return (name); }
int Character::getAP() const { return (ap); }
AWeapon *Character::getWeapon() const { return (arme); };

void Character::recoverAP() {
    if ((ap += 10) > 40)
        ap = 40;
}

void Character::equip(AWeapon *parme) {
    arme = parme;
}

void Character::attack(Enemy *penemy) {
    if (arme && ap >= arme->getAPCost()) {
        std::cout << name << " attack " << penemy->getType() << " with a " << arme->getName() << std::endl;
        arme->attack();
        penemy->takeDamage(arme->getDamage());
        ap -= arme->getAPCost();
    }
}

Character::~Character() {}

std::ostream &operator<<(std::ostream &os, const Character &carac) {
    if (carac.getWeapon())
        os << carac.getName() << " has " << carac.getAP() << " AP and carries a " << carac.getWeapon()->getName();
    else
        os << carac.getName() << " has " << carac.getAP() << " AP and is unarmed";
    os << std::endl;
    return (os);
}