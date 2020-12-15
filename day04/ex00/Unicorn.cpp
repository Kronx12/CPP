/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unicorn.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:24:53 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:27:25 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Unicorn.hpp"

Unicorn::Unicorn(std::string pname) : Victim(pname) {
    std::cout << "UUuuuhhh." << std::endl;
}

Unicorn::Unicorn(const Unicorn &other) : Victim(other) {
    std::cout << "UUuuuhhh." << std::endl;
}

Unicorn &Unicorn::operator=(const Unicorn &other) {
    std::cout << "UUuuuhhh." << std::endl;
    Victim::operator=(other);
    return (*this);
}

void Unicorn::getPolymorphed() const {
    std::cout << getName() << " was just polymorphed in a huge kraken!" << std::endl;
}

Unicorn::~Unicorn() {
    std::cout << "Pchiittt..." << std::endl;
}