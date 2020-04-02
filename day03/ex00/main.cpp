/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:37 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 07:01:40 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
    
    return 0;
}