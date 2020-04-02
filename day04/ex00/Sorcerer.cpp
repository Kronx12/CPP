/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:31:19 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/16 10:41:09 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string pnom, std::string ptitre) {
    nom = pnom;
    titre = ptitre;
    std::cout << nom << ", " << titre << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other) {
    nom = other.nom;
    titre = other.titre;
    std::cout << nom << ", " << titre << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other) {
    nom = other.nom;
    titre = other.titre;
    std::cout << nom << ", " << titre << ", is born!" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &other) {
    os << "I am " << other.getName() << ", " << other.getTitle() << ", and i like ponies!" << std::endl;
    return (os);
}

std::string Sorcerer::getName() const {
    return (nom);
}

std::string Sorcerer::getTitle() const {
    return (titre);
}

void    Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
}

Sorcerer::~Sorcerer() {
    std::cout << nom << ", " << titre << ", is dead. Consequences will never be the same!" << std::endl;
}