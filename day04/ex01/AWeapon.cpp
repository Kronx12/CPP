/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:40:20 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:57:16 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &pname, int papcost, int pdamage) : 
    name(pname), apcost(papcost), damage(pdamage) {}
AWeapon::AWeapon(const AWeapon &other) : 
    name(other.getName()), apcost(other.getAPCost()), damage(other.getDamage()) {}
AWeapon &AWeapon::operator=(const AWeapon &other) {
    name = other.name;
    apcost = other.apcost;
    damage = other.damage;
    return (*this);
}

const std::string AWeapon::getName() const { return (name); }
int AWeapon::getAPCost() const { return (apcost); }
int AWeapon::getDamage() const { return (damage); }

AWeapon::~AWeapon() {}