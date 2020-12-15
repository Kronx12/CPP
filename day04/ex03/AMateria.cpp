/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:43:28 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:07:38 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &ptype) :
    _xp(0), type(ptype) {}

AMateria::AMateria(const AMateria &mat) :
    _xp(mat.getXP()), type(mat.getType()) {}

AMateria &AMateria::operator=(const AMateria &mat) {
    _xp = mat.getXP();
    type = mat.getType();
    return (*this);
}

const std::string &AMateria::getType() const {
    return (type);
}
unsigned int AMateria::getXP() const {
    return (_xp);
}

void AMateria::use(ICharacter &target) {
    (void)target;
    _xp += 10;
}

AMateria::~AMateria() {}