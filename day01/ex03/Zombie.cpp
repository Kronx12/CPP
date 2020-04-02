/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:30:15 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 12:30:15 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce() {
    std::cout << "<" << name << " (" << type << ")> Braiiiiiiiaaannnssss ...." << std::endl;
}

void Zombie::setName(std::string nname) {
    name = nname;
}

void Zombie::setType(std::string ntype) {
    type = ntype;
}