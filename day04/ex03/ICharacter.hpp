/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:23:05 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:17:34 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "AMateria.hpp"

class AMateria;

class ICharacter {
    public:
        virtual ~ICharacter() {};
        virtual const std::string &getName() const = 0;
        virtual void equip(AMateria *mat) = 0;
        virtual void unequip(int i) = 0;
        virtual void use(int i, ICharacter &target) = 0;
};

#endif
