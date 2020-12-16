/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:00:50 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:35:50 by gbaud            ###   ########lyon.fr   */
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
    for (int i = 0; i < 4; i++)
        if (!list[i]) {
            list[i] = mat;
            break;
        }
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