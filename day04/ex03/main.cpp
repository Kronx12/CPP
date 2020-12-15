/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:12:31 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:26:48 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    moi->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);
    moi->use(2, *bob);
    moi->use(3, *bob);
    
    delete bob;
    delete moi;
    delete src;
    delete tmp;
    return 0;
}