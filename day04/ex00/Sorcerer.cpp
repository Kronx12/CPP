/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:31:19 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:21:59 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string pname, std::string ptitle) : name(pname), title(ptitle) {
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &other) : name(other.name), title(other.title) {
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other) {
    name = other.name;
    title = other.title;
    std::cout << name << ", " << title << ", is born!" << std::endl;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &other) {
    os << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
    return (os);
}

std::string Sorcerer::getName() const {
    return (name);
}

std::string Sorcerer::getTitle() const {
    return (title);
}

void    Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
}

Sorcerer::~Sorcerer() {
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}