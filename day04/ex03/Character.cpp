/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:52:02 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:21:47 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string pname) : name(pname) {
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
}

Character::Character(const Character &charac) :
    name(charac.getName()) {
    inv[0] = charac.getI(0);
    inv[1] = charac.getI(1);
    inv[2] = charac.getI(2);
    inv[3] = charac.getI(3);
}

Character &Character::operator=(const Character &charac) {
    name = charac.getName();
    inv[0] = charac.getI(0);
    inv[1] = charac.getI(1);
    inv[2] = charac.getI(2);
    inv[3] = charac.getI(3);
    return (*this);
}

AMateria *Character::getI(int i) const {
    return (inv[i]);
}

const std::string &Character::getName() const {
    return (name);
}

void Character::equip(AMateria *mat) {
    if (!inv[0])
        inv[0] = mat;
    else if (!inv[1])
        inv[1] = mat;
    else if (!inv[2])
        inv[2] = mat;
    else if (!inv[3])
        inv[3] = mat;
}

void Character::unequip(int i) {
    if (i >= 0 && i < 4)
        inv[i] = NULL;
}

void Character::use(int i, ICharacter &target) {
    if (i >= 0 && i < 4 && getI(i))
        getI(i)->use(target);
}

Character::~Character() {
    if (inv[0])
        delete inv[0];
    else if (inv[1])
        delete inv[1];
    else if (inv[2])
        delete inv[2];
    else if (inv[3])
        delete inv[3];
}