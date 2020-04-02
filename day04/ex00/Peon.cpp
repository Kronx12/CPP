/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:29:04 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/16 10:42:47 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string pname) : Victim(pname) {
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &other) : Victim(other) {
    std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &other) {
    std::cout << "Zog zog." << std::endl;
    Victim::operator=(other);
    return (*this);
}

void Peon::getPolymorphed() const {
    std::cout << getName() << " was just polymorphed in a pink pony!" << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}