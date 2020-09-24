/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:14:54 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:44:09 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
    private:
        std::string type;
        Weapon();

    public:
        Weapon(std::string stype);
        const std::string& getType() const;
        void setType(std::string stype);
};

#endif