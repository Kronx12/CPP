/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:28:11 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 05:24:07 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    
    std::cout << std::endl << std::endl;
	Sorcerer abc(robert);
	Victim toto(jim);
	Peon allo(joe);
	std::cout << abc << toto << allo;
	toto = jim;
	abc.polymorph(toto);
    
    std::cout << std::endl << std::endl;
	abc = robert;
	allo = joe;
	abc.polymorph(allo);
    return (0);
}