/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:46 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 08:36:38 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string pname) : ClapTrap(pname, 60, 60, 120, 120, 1, 60, 5, 0) {
    std::cout << "NINJ4-TP : Constructor called !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(
    other.name,
    other.hit_point,
    other.max_hit_point,
    other.energy_point,
    other.max_energy_point,
    other.level,
    other.melee_attack_damage,
    other.ranged_attack_damage,
    other.armor_damage_reduction) {
    std::cout << "NINJ4-TP : Constructor called !" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
{
	name = other.name;
	level = other.level;
	hit_point = other.hit_point;
	max_hit_point = other.max_hit_point;
	energy_point = other.energy_point;
	max_energy_point = other.max_energy_point;
	melee_attack_damage = other.melee_attack_damage;
	ranged_attack_damage = other.ranged_attack_damage;
	armor_damage_reduction = other.armor_damage_reduction;
    std::cout << "NINJ4-TP : Constructor called !" << std::endl;
	return (*this);
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &nt) {
    std::cout << "NINJ4-TP : " << name << " dit: \"Hey ! t'es un ninja toi aussi " << nt.getName() << "!\"" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ClapTrap &ct) {
    std::cout << "NINJ4-TP : " << name << " dit: \"Mais ! t'es pas un ninja " << ct.getName() << " !\"" << std::endl;
}


NinjaTrap::~NinjaTrap() {
    std::cout << "NINJ4-TP : Destructor called !" << std::endl;
}