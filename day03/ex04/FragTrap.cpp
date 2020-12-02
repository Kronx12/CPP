/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:46 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/02 05:32:54 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <stdlib.h>

FragTrap::FragTrap() : ClapTrap("default", 100, 100, 100, 100, 1, 30, 20, 5) {
    std::cout << "FR4G-TP : Constructor called !" << std::endl;
}

FragTrap::FragTrap(std::string pname) : ClapTrap(pname, 100, 100, 100, 100, 1, 30, 20, 5) {
    std::cout << "FR4G-TP : Constructor called !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(
    other.name,
    other.hit_point,
    other.max_hit_point,
    other.energy_point,
    other.max_energy_point,
    other.level,
    other.melee_attack_damage,
    other.ranged_attack_damage,
    other.armor_damage_reduction) {
    std::cout << "FR4G-TP : Constructor called !" << std::endl;
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
    std::cout << "FR4G-TP : Constructor called !" << std::endl;
	return (*this);
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
        std::cout << "FR4G-TP : " << name << " n'a pas assez d'energies !" << std::endl;
    else {
        std::cout << "FR4G-TP : " << name << " attaque " << target << " en lui faisant un " << attacks[r] << ", causant " << dmgs[r] << " points de dégâts !" << std::endl;
        energy_point -= 25;
    }
}

FragTrap::~FragTrap() {
    std::cout << "FR4G-TP : Destructor called !" << std::endl;
}