/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:59:38 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 07:11:27 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <cstddef>

Squad::Squad() : count(0), units(NULL) {}

Squad::Squad(const ISquad &other) : count(0), units(NULL) {
    for (int i = 0; i < count; i++)
        push(other.getUnit(i)->clone());
}
Squad &Squad::operator=(const ISquad &other) {
    for (int i = 0; i < count; i++)
        delete units[i];
    delete [] units;
    count = 0;
    for (int i = 0; i < count; i++)
        push(other.getUnit(i)->clone());
    return (*this);
}

int Squad::getCount() const { return (count); }

ISpaceMarine *Squad::getUnit(int i) const {
    if (i < 0 || i >= count)
        return (NULL);
    return (units[i]) ;
}

int Squad::push(ISpaceMarine *ism) {
    if (ism) {
        for (int i = 0; i < count; i++)
            if (units[i] == ism)
				return (count);
        ISpaceMarine **tmp = new ISpaceMarine*[count + 1];
        for (int i = 0; i < count; i++)
            tmp[i] = units[i];
        tmp[count] = ism;
        delete [] units;
        units = tmp;
        count++;
    }
    return (count);
}
        
Squad::~Squad() {
    for (int i = 0; i < count; i++)
        delete units[i];
    delete [] units;
}