/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 04:26:00 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:44:45 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, const Weapon &w) : weapon(w), name(n) {}

void HumanA::attack() {
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}