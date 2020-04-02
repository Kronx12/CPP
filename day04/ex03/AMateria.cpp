/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:43:28 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/18 15:51:21 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

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

void AMateria::addXP(unsigned int a) {
    _xp += a;
}

AMateria::~AMateria() {}