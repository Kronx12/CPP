/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dragon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:27:47 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:29:21 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dragon.hpp"

Dragon::Dragon() : Enemy(200, "Dragon") {
    std::cout << "~ Froouuaahh ~" << std::endl;
}

Dragon::Dragon(const Dragon &sm) : Enemy(sm.getHP(), sm.getType()) {
    std::cout << "~ Froouuaahh ~" << std::endl;
}

Dragon &Dragon::operator=(const Dragon &sm) {
    Enemy::operator=(sm);
    std::cout << "~ Froouuaahh ~" << std::endl;
    return (*this);
}

Dragon::~Dragon() {
    std::cout << "~ CRRAASCK ~" << std::endl;
}