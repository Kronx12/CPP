/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:27:47 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 12:17:51 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
    private:
        Character();
        std::string name;
        AWeapon *arme;
        int ap;
    public:
        Character(const std::string &name);
        Character(const Character &carac);
        Character &operator=(const Character &carac);
        void recoverAP();
        void equip(AWeapon *arme);
        void attack(Enemy *enemy);
        const std::string getName() const;
        int getAP() const;
        AWeapon *getWeapon() const;
        ~Character();
};

std::ostream &operator<<(std::ostream &os, const Character &carac);

#endif  