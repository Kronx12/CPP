/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 11:19:14 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:34:02 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &tm) {
    static_cast<void>(tm);
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &tm) {
    static_cast<void>(tm);
    return (*this);
}

ISpaceMarine *AssaultTerminator::clone() const {
    return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks width chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I'll be back ..." << std::endl;
}