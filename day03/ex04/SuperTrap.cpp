/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:35:11 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 12:37:43 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string pname) : ClapTrap(pname, 100, 100, 120, 120, 1, 60, 20, 5) {
    std::cout << "SUPER-TP : Constructor called !" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(
    other.name,
    other.hit_point,
    other.max_hit_point,
    other.energy_point,
    other.max_energy_point,
    other.level,
    other.melee_attack_damage,
    other.ranged_attack_damage,
    other.armor_damage_reduction) {
    std::cout << "SUPER-TP : Constructor called !" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
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
    std::cout << "SUPER-TP : Constructor called !" << std::endl;
	return (*this);
}

void SuperTrap::meleeAttack(const std::string &target) {
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target) {
    FragTrap::rangedAttack(target);
}

SuperTrap::~SuperTrap() {
    std::cout << "SUPER-TP : Destructor called !" << std::endl;
}