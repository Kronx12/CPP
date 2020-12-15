/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:59:05 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:19:40 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &mat) : AMateria(mat) {}

Ice &Ice::operator=(const Ice &mat) {
    AMateria::operator=(mat);
    return (*this);
}

AMateria *Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
    _xp += 10;
    std::cout << "* shoots an ice bolt al " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {}