/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:46 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/02 05:28:51 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string pname) : ClapTrap(pname, 100, 100, 50, 50, 1, 20, 15, 3) {
    std::cout << "SC4V-TP : Constructor called !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(
    other.name,
    other.hit_point,
    other.max_hit_point,
    other.energy_point,
    other.max_energy_point,
    other.level,
    other.melee_attack_damage,
    other.ranged_attack_damage,
    other.armor_damage_reduction) {
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

void ScavTrap::challengeNewcomer(const std::string &target) {
    int r = rand() % 5;
    std::string challenges[5];
    challenges[0] = "Challenge 1";
    challenges[1] = "Challenge 2";
    challenges[2] = "Challenge 3";
    challenges[3] = "Challenge 4";
    challenges[4] = "Challenge 5";
    std::cout << "SC4V-TP : " << name << " challenge " << target << " \" " << challenges[r] << " \" !" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP : Destructor called !" << std::endl;
}