/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:17:26 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 04:35:23 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon() {
    type = std::string("undefined");
}

Weapon::Weapon(std::string stype) {
    type = stype;
}

void Weapon::setType(std::string stype) {
    type = stype;
}

const std::string& Weapon::getType() const {
    return (type);
}