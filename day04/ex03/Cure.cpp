/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:59:49 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:23:26 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &mat) : AMateria(mat) {}

Cure &Cure::operator=(const Cure &mat) {
    AMateria::operator=(mat);
    return (*this);
}

AMateria *Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
    _xp += 10;
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {}