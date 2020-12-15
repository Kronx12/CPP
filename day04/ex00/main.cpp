/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:28:11 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:30:29 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Unicorn.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
    // Subject main :
    /*Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);*/

    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Unicorn pegaze("Pegaze");
    std::cout << robert << jim << joe << pegaze;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(pegaze);
    
    std::cout << std::endl << std::endl;
	Sorcerer abc(robert);
	Victim toto(jim);
	Peon allo(joe);
	Unicorn pegasus(pegaze);
    
	std::cout << abc << toto << allo << pegasus;
	toto = jim;
	abc.polymorph(toto);
    
    std::cout << std::endl << std::endl;
	abc = robert;
	allo = joe;
	pegasus = pegaze;
	abc.polymorph(allo);
	abc.polymorph(pegasus);
    return (0);
}