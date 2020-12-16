/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:52:02 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:37:34 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string pname) : name(pname) {
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
}

Character::Character(const Character &charac) :
    name(charac.getName()) {
    for (int i = 0; i < 4; i++)
        inv[i] = charac.getI(i);
}

Character &Character::operator=(const Character &charac) {
    name = charac.getName();
    for (int i = 0; i < 4; i++)
        inv[i] = charac.getI(i);
    return (*this);
}

AMateria *Character::getI(int i) const {
    return (inv[i]);
}

const std::string &Character::getName() const {
    return (name);
}

void Character::equip(AMateria *mat) {
    for (int i = 0; i < 4; i++)
        if (!inv[i]) {
            inv[i] = mat;
            break;
        }
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
    for (int i = 0; i < 4; i++)
        if (inv[i])
            delete inv[i];
}