/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:37 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 08:38:49 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
    FragTrap frag("FR4G");
	frag.vaulthunter_dot_exe("SC4V");
	frag.meleeAttack("SC4V");
	frag.rangedAttack("SC4V");
	frag.takeDamage(24);
	frag.beRepaired(50);
	frag.takeDamage(42);
	frag.takeDamage(100);
	frag.beRepaired(125);
	frag.vaulthunter_dot_exe("SC4V");
	frag.vaulthunter_dot_exe("SC4V");
	frag.vaulthunter_dot_exe("SC4V");
	frag.vaulthunter_dot_exe("SC4V");
    
    
    ScavTrap scav("SC4V");
	scav.challengeNewcomer("NINJ4");
	scav.meleeAttack("NINJ4");
	scav.rangedAttack("NINJ4");
	scav.takeDamage(24);
	scav.beRepaired(50);
	scav.takeDamage(42);
	scav.takeDamage(100);
	scav.beRepaired(125);
	scav.challengeNewcomer("NINJ4");
	scav.challengeNewcomer("NINJ4");
	scav.challengeNewcomer("NINJ4");
	scav.challengeNewcomer("NINJ4");
	
	ClapTrap clap("CL4P");
	NinjaTrap ninja("NINJ4");
	NinjaTrap *trUe = new NinjaTrap("YEAH");
	ninja.ninjaShoebox(ninja);
	ninja.meleeAttack("CL4P-TP");
	ninja.rangedAttack("CL4P-TP");
	ninja.takeDamage(24);
	ninja.beRepaired(50);
	ninja.takeDamage(42);
	ninja.takeDamage(100);
	ninja.beRepaired(125);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(*trUe);
	delete trUe;
    return 0;
}