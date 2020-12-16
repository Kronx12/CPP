/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:31:43 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:32:14 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Katana.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Dragon.hpp"
#include "Character.hpp"

int main() {
    Character* moi = new Character("moi");
    std::cout << *moi;
    
    Enemy* b = new RadScorpion();
    Enemy* m = new SuperMutant();
    Enemy* d = new Dragon();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* kat = new Katana();
    
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

    std::cout << "Mutant life : " << m->getHP() << std::endl;

    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();
    moi->recoverAP();

    moi->equip(kat);
    std::cout << *moi;
    moi->attack(m);
    std::cout << *moi;

    std::cout << "Dragon life : " << d->getHP() << std::endl;
    moi->attack(d);
    moi->attack(d);
    moi->attack(d);
    moi->attack(d);
    moi->attack(d);
    moi->attack(d);
    moi->attack(d);
    std::cout << "Dragon life : " << d->getHP() << std::endl;
    moi->attack(d);



    delete moi;
    delete pr;
    delete pf;
    delete kat;
    return (0);
}