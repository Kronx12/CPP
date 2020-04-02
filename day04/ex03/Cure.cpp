/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:59:49 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/18 15:53:09 by gbaud            ###   ########lyon.fr   */
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
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    addXP(10);
}

Cure::~Cure() {

}