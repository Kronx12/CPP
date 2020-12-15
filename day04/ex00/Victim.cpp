/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:30:45 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:15:00 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string pname) : name(pname) {
    std::cout << "A random victim called " << name << ", just appeared!" << std::endl;
}

Victim::Victim(const Victim &other) : name(other.name) {
    std::cout << "A random victim called " << name << ", just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &other) {
    name = other.name;
    std::cout << "A random victim called " << name << ", just appeared!" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Victim &other) {
    os << "I'm " << other.getName() << " and I like otters!" << std::endl;
    return (os);
}

std::string Victim::getName() const {
    return (name);
}

void Victim::getPolymorphed() const {
    std::cout << name << " was just polymorphed in a cute little sheep!" << std::endl;
}

Victim::~Victim() {
    std::cout << "The victim " << name << " died for no apparent reasons!" << std::endl;
}