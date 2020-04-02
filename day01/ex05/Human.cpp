/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 14:03:56 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 03:38:13 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "Brain.hpp"
#include "Human.hpp"
#include <sstream>
#include <iostream>
#include <memory.h>

Human::Human() {}

std::string Human::identifier() const {
    return (brain.identifier());
}

const Brain &Human::getBrain() const {
    return (brain);
}