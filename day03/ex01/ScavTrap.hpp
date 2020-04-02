/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 07:12:11 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
    private:
        int hit_point;
        int max_hit_point;
        int energy_point;
        int max_energy_point;
        int level;
        int melee_attack_damage;
        int ranged_attack_damage;
        int armor_damage_reduction;
        std::string name;
    public:
        ScavTrap(std::string pname);
        ScavTrap(ScavTrap const &ft);
        ScavTrap &operator=(ScavTrap const &other);
        void rangedAttack(const std::string &target);
        void meleeAttack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(const std::string &target);
        ~ScavTrap();
};

#endif