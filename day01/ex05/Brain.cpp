/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 14:03:51 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:39:26 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream> 

Brain::Brain() { neurones = 10; }

std::string Brain::identifier() const {
    const long addresse = (long)this;

	std::stringstream ss;
	ss << "0x" << std::uppercase << std::hex << addresse;
	return (ss.str());
}
