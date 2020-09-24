/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 14:03:56 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:40:07 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

std::string Human::identifier() const { return (brain.identifier()); }
const Brain &Human::getBrain() const { return (brain); }
