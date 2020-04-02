/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:30:45 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/16 10:42:04 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string pnom) {
    nom = pnom;
    std::cout << "A random victim called " << nom << ", just appeared!" << std::endl;
}

Victim::Victim(const Victim &other) {
    nom = other.nom;
    std::cout << "A random victim called " << nom << ", just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &other) {
    nom = other.nom;
    std::cout << "A random victim called " << nom << ", just appeared!" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Victim &other) {
    os << "I'm " << other.getName() << " and I like otters!" << std::endl;
    return (os);
}

std::string Victim::getName() const {
    return (nom);
}

void Victim::getPolymorphed() const {
    std::cout << nom << " was just polymorphed in a cute little sheep!" << std::endl;
}

Victim::~Victim() {
    std::cout << "Victim " << nom << " died for no apparent reasons!" << std::endl;
}