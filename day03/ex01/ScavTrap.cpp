/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:46 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 07:22:21 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <time.h>

// CONSTRUCTOR
ScavTrap::ScavTrap(std::string pname) : name(pname) {
    hit_point = 100;
    max_hit_point = 100;
    energy_point = 50;
    max_energy_point = 50;
    level = 1;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
    std::cout << "SC4V-TP : Constructor called !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : name(other.name) {
	level = other.level;
	hit_point = other.hit_point;
	max_hit_point = other.max_hit_point;
	energy_point = other.energy_point;
	max_energy_point = other.max_energy_point;
	melee_attack_damage = other.melee_attack_damage;
	ranged_attack_damage = other.ranged_attack_damage;
	armor_damage_reduction = other.armor_damage_reduction;
    std::cout << "SC4V-TP : Constructor called !" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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
    std::cout << "SC4V-TP : Constructor called !" << std::endl;
	return (*this);
}

void ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "SC4V-TP : " << name << " attaque " << target << " à distance, causant " << ranged_attack_damage << " points de dégâts !" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "SC4V-TP : " << name << " attaque " << target << " en corps à corps, causant " << melee_attack_damage << " points de dégâts !" << std::endl;
}

void ScavTrap::challengeNewcomer(const std::string &target) {
	struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    srand((time_t)ts.tv_nsec);
    int rand = std::rand()%5;
    std::string challenges[5];
    challenges[0] = "Challenge 1";
    challenges[1] = "Challenge 2";
    challenges[2] = "Challenge 3";
    challenges[3] = "Challenge 4";
    challenges[4] = "Challenge 5";
    std::cout << "SC4V-TP : " << name << " challenge " << target << " \" " << challenges[rand] << " \" !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    std::cout << "SC4V-TP : " << name << " à recu " << amount << " points de dégâts !" << std::endl;
    hit_point -= (amount - armor_damage_reduction);
    if (hit_point < 0)
        hit_point = 0;
}

void ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "SC4V-TP : " << name << " à recu " << amount << " points de réparation !" << std::endl;
    hit_point += amount;
    if (hit_point > max_hit_point)
        hit_point = max_hit_point;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP : Destructor called !" << std::endl;
}