/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:46:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 07:23:10 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    ISquad* tmp = new Squad(*vlc);
    for (int i = 0; i < vlc->getCount(); ++i) {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    for (int i = 0; i < tmp->getCount(); ++i) {
        ISpaceMarine* cur = tmp->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete tmp;
    return 0;
}
/*
#include <iostream>
#include <stdlib.h>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

#define UNITS	50

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "---" << std::endl;

	Squad squad;

	squad.push(new TacticalMarine);
	squad.push(new AssaultTerminator);
	for (int i = 2; i < UNITS; i++)
	{
		if ((rand() % 100) > UNITS)
			squad.push(new TacticalMarine);
		else
			squad.push(new AssaultTerminator);
	}
	for (int i = 0; i < UNITS; i++)
	{
		int r = (rand() % 100);
		std::cout << i << ": ";
		if (r > 66)
			squad.getUnit(i)->battleCry();
		else if (r > 33)
			squad.getUnit(i)->rangedAttack();
		else
			squad.getUnit(i)->meleeAttack();
	}
	std::cout << squad.getCount() << " -> " << squad.push(NULL) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS - 1)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS)) << std::endl;
	std::cout << squad.getCount() << " -> " << squad.push(squad.getUnit(UNITS + 1)) << std::endl;
	std::cout << squad.getUnit(-1) << " " << squad.getUnit(10000) << std::endl;

	TacticalMarine *tac = new TacticalMarine(*static_cast<TacticalMarine*>(squad.getUnit(0)));
	std::cout << squad.getCount() << " -> " << squad.push(tac) << std::endl;
	tac = static_cast<TacticalMarine*>(squad.getUnit(0)->clone());
	std::cout << squad.getCount() << " -> " << squad.push(tac) << std::endl;
	AssaultTerminator *ast = new AssaultTerminator(*static_cast<AssaultTerminator*>(squad.getUnit(1)));
	std::cout << squad.getCount() << " -> " << squad.push(ast) << std::endl;
	ast = static_cast<AssaultTerminator*>(squad.getUnit(1)->clone());
	std::cout << squad.getCount() << " -> " << squad.push(ast) << std::endl;

	TacticalMarine tes = *static_cast<TacticalMarine*>(squad.getUnit(0));
	tes = *static_cast<TacticalMarine*>(squad.getUnit(0));
	AssaultTerminator aes = *static_cast<AssaultTerminator*>(squad.getUnit(1));
	aes = *static_cast<AssaultTerminator*>(squad.getUnit(1));

	return (0);
}*/
