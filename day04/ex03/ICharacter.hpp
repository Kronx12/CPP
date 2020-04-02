/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:23:05 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/19 08:25:24 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "AMateria.hpp"

class ICharacter {
    public:
        virtual ~ICharacter() {}
        virtual const std::string &getName() const = 0;
        virtual void equip(AMateria *mat) = 0;
        virtual void unequip(int i) = 0;
        virtual void use(int i, ICharacter &target) = 0;
};

#endif
