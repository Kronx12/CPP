/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 10:54:38 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/18 11:26:07 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tm) {
    (void)tm;
    std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tm) {
    (void)tm;
    return (*this);
}

ISpaceMarine *TacticalMarine::clone() const {
    return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const {
    std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks width a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks width a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ..." << std::endl;
}