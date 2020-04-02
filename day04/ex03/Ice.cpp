/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:59:05 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/18 15:53:14 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("cure") {}
Ice::Ice(const Ice &mat) : AMateria(mat) {}
Ice &Ice::operator=(const Ice &mat) {
    AMateria::operator=(mat);
    return (*this);
}
AMateria *Ice::clone() const {
    return (new Ice(*this));
}
void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt al " << target.getName() << " *" << std::endl;
    addXP(10);
}

Ice::~Ice() {
    
}