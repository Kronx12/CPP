/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:31:43 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 07:06:15 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main() {
    Character* moi = new Character("moi");
    std::cout << *moi;
    
    Enemy* b = new RadScorpion();
    Enemy* m = new SuperMutant();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;

    moi->attack(m);
    std::cout << *moi;

    moi->attack(b);
    std::cout << *moi;

    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();

    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;

    std::cout << "Mutant life : " << m->getHP();

    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();
    
    moi->attack(m);
    std::cout << *moi;


    delete moi;
    delete pr;
    delete pf;
    return (0);
}