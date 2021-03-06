/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:27:47 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:57:14 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon {
    private:
        AWeapon();
        std::string name;
        int apcost;
        int damage;
    public:
        AWeapon(const std::string &name, int apcost, int damage);
        AWeapon(const AWeapon &other);
        AWeapon &operator=(const AWeapon &other);
        const std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
        virtual ~AWeapon();
};

#endif