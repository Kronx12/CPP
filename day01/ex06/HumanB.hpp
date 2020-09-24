/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:26:57 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:47:17 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        const Weapon *weapon;
        std::string name;
        HumanB();

    public:
        HumanB(std::string n);
        void setWeapon(const Weapon &w);
        void attack();
};

#endif