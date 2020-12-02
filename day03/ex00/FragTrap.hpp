/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/02 03:46:33 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAP_HPP
#define FRAGTAP_HPP

#include <iostream>

class FragTrap {
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
    FragTrap(std::string pname);
    FragTrap(FragTrap const &ft);
    FragTrap &operator=(FragTrap const &other);
    void rangedAttack(const std::string &target);
    void meleeAttack(const std::string &target);
    void vaulthunter_dot_exe(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~FragTrap();
};

#endif