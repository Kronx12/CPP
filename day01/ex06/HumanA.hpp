/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:26:57 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:47:22 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        const Weapon& weapon;
        std::string name;
        HumanA();

    public:
        HumanA(std::string n, const Weapon &w);
        void attack();
};

#endif