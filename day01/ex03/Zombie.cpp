/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:30:15 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:29:20 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce() {
    std::cout << "<" << name << " (" << type << ")> Braiiiiiiiaaannnssss ...." << std::endl;
}

void Zombie::setName(std::string nname) { name = nname; }
void Zombie::setType(std::string ntype) { type = ntype; }