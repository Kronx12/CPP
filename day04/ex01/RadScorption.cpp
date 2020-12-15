/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorption.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:18:38 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:51:42 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScropion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &sm) : Enemy(sm.getHP(), sm.getType()) {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &sm) {
    Enemy::operator=(sm);
    std::cout << "* click click click *" << std::endl;
    return (*this);
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}