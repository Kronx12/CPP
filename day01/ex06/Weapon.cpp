/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:17:26 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:43:32 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon() {
    type = std::string("undefined");
}

// SETTER
Weapon::Weapon(std::string stype) { type = stype; }
void Weapon::setType(std::string stype) { type = stype; }

// GETTER
const std::string& Weapon::getType() const { return (type); }