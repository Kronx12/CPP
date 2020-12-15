/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:00:50 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:22:31 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
		list[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    for (int i = 0; i < 4; i++)
	    learnMateria(other.list[i]->clone());
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    for (int i = 0; i < 4; i++)
		delete list[i];
	for (int i = 0; i < 4; i++)
		learnMateria(other.list[i]->clone());
	for (int i = 0; i < 4; i++)
		list[i] = NULL;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *mat) {
    if (!list[0])
        list[0] = mat;
    else if (!list[1])
        list[1] = mat;
    else if (!list[2])
        list[2] = mat;
    else if (!list[3])
        list[3] = mat;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; i++)
        if (list[i] && list[i]->getType() == type)
            return (list[i]->clone());
    return (NULL);
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        if (list[i])
            delete list[i];
}