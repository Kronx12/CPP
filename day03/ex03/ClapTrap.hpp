/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 07:25:24 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 08:35:14 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
    protected:
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
        ClapTrap(const std::string &name);
        ClapTrap(std::string pname, int hp, int mhp, int ep, int mep, int l, int mad, int rad, int adr);
        ClapTrap(ClapTrap const &ft);
        ClapTrap &operator=(ClapTrap const &other);
        const std::string &getName() const;
        
        void rangedAttack(const std::string &target);
        void meleeAttack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        ~ClapTrap();
};

#endif