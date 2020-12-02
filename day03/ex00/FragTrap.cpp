/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:46 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/02 04:05:13 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>

// CONSTRUCTOR
FragTrap::FragTrap(std::string pname) : name(pname) {
    hit_point = 100;
    max_hit_point = 100;
    energy_point = 100;
    max_energy_point = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    std::cout << "Constructor called !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : name(other.name) {
	name = other.name;
	level = other.level;
	hit_point = other.hit_point;
	max_hit_point = other.max_hit_point;
	energy_point = other.energy_point;
	max_energy_point = other.max_energy_point;
	melee_attack_damage = other.melee_attack_damage;
	ranged_attack_damage = other.ranged_attack_damage;
	armor_damage_reduction = other.armor_damage_reduction;
    std::cout << "Constructor called !" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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
	return (*this);
}

void FragTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << name << " attaque " << target << " à distance, causant " << ranged_attack_damage << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << name << " attaque " << target << " en corps à corps, causant " << melee_attack_damage << " points de dégâts !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
    int r = rand() % 5;
    std::string attacks[5];
    attacks[0] = "HadoKen";
    attacks[1] = "Dive Kick";
    attacks[2] = "Giga Drill Breaker";
    attacks[3] = "Schta Platinou";
    attacks[4] = "Zaa Warudoo";
    int dmgs[5] = {30, 15, 22, 10, 12};
    if (energy_point < 25)
        std::cout << "FR4G-TP " << name << " n'a pas assez d'energies !" << std::endl;
    else {
        std::cout << "FR4G-TP " << name << " attaque " << target << " en lui faisant un " << attacks[r] << ", causant " << dmgs[r] << " points de dégâts !" << std::endl;
        energy_point -= 25;
    }
}

void FragTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP " << name << " à recu " << amount << " points de dégâts !" << std::endl;
    hit_point -= (amount - armor_damage_reduction);
    if (hit_point < 0)
        hit_point = 0;
}

void FragTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP " << name << " à recu " << amount << " points de réparation !" << std::endl;
    hit_point += amount;
    if (hit_point > max_hit_point)
        hit_point = max_hit_point;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor called !" << std::endl;
}