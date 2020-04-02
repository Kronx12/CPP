/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 13:26:10 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 12:29:27 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void Pony::setName(std::string val) {
    name = val;
}

std::string Pony::getName() {
    return (name);
}

void Pony::jump() {
    std::cout << "Le poney " << name << " saute !" << std::endl;
}