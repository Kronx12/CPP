/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 13:26:10 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/23 16:40:19 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string pname, int pyear) : name(pname), year(pyear) {}

std::string Pony::getName() { return (name); }
int Pony::getYear() { return (year); }

void Pony::setName(std::string pname) { name = pname; }
void Pony::setYear(int page) { year = page; }

void Pony::jump() {
    std::cout << "Le poney " << getName() << " saute !" << " Et il a " << getYear() << " ans !" << std::endl;
}