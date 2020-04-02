/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 07:25:27 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 07:53:23 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string pname, int hp, int mhp, int ep, int mep, int l, int mad, int rad, int adr) :
    hit_point(hp),
    max_hit_point(mhp),
    energy_point(ep),
    max_energy_point(mep),
    level(l),
    melee_attack_damage(mad),
    ranged_attack_damage(rad),
    armor_damage_reduction(adr),
    name(pname) {
    std::cout << "CL4P-TP : Constructor called !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ct) :
    hit_point(ct.hit_point),
    max_hit_point(ct.max_hit_point),
    energy_point(ct.energy_point),
    max_energy_point(ct.max_energy_point),
    level(ct.level),
    melee_attack_damage(ct.melee_attack_damage),
    ranged_attack_damage(ct.ranged_attack_damage),
    armor_damage_reduction(ct.armor_damage_reduction),
    name(ct.name) {
    std::cout << "CL4P-TP : Constructor called !" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
	name = other.name;
	level = other.level;
	hit_point = other.hit_point;
	max_hit_point = other.max_hit_point;
	energy_point = other.energy_point;
	max_energy_point = other.max_energy_point;
	melee_attack_damage = other.melee_attack_damage;
	ranged_attack_damage = other.ranged_attack_damage;
	armor_damage_reduction = other.armor_damage_reduction;
    std::cout << "CL4P-TP : Constructor called !" << std::endl;
	return (*this);
}

void ClapTrap::rangedAttack(const std::string &target) {
    std::cout << "CL4P-TP : " << name << " attaque " << target << " à distance, causant " << ranged_attack_damage << " points de dégâts !" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {
    std::cout << "CL4P-TP : " << name << " attaque " << target << " en corps à corps, causant " << melee_attack_damage << " points de dégâts !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "CL4P-TP : " << name << " à recu " << amount << " points de dégâts !" << std::endl;
    hit_point -= (amount - armor_damage_reduction);
    if (hit_point < 0)
        hit_point = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "CL4P-TP : " << name << " à recu " << amount << " points de réparation !" << std::endl;
    hit_point += amount;
    if (hit_point > max_hit_point)
        hit_point = max_hit_point;
}

ClapTrap::~ClapTrap() {
    std::cout << "CL4P-TP : Destructor called !" << std::endl;
}