/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:37 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 07:17:43 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    FragTrap frag("Bot1");
	frag.vaulthunter_dot_exe("Bot2");
	frag.meleeAttack("Bot2");
	frag.rangedAttack("Bot2");
	frag.takeDamage(24);
	frag.beRepaired(50);
	frag.takeDamage(42);
	frag.takeDamage(100);
	frag.beRepaired(125);
	frag.vaulthunter_dot_exe("Bot2");
	frag.vaulthunter_dot_exe("Bot2");
	frag.vaulthunter_dot_exe("Bot2");
	frag.vaulthunter_dot_exe("Bot2");
    
    
    ScavTrap frag2("Bot2");
	frag2.challengeNewcomer("Bot3");
	frag2.meleeAttack("Bot3");
	frag2.rangedAttack("Bot3");
	frag2.takeDamage(24);
	frag2.beRepaired(50);
	frag2.takeDamage(42);
	frag2.takeDamage(100);
	frag2.beRepaired(125);
	frag2.challengeNewcomer("Bot3");
	frag2.challengeNewcomer("Bot3");
	frag2.challengeNewcomer("Bot3");
	frag2.challengeNewcomer("Bot3");
    return 0;
}