/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 14:03:51 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 03:38:50 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream> 
#include <iostream> 

Brain::Brain() {
    neurones = 10;
}

std::string Brain::identifier() const {
    const long addresse = (long)this;

	std::stringstream ss;
	ss << "0x" << std::uppercase << std::hex << addresse;
	return (ss.str());
}
