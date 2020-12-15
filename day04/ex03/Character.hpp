/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:51:50 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:16:00 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        AMateria *inv[4];
        std::string name;
        Character();
    public:
        Character(std::string name);
        Character(const Character &charac);
        Character &operator=(const Character &charac);
        virtual const std::string &getName() const;
        virtual AMateria *getI(int i) const;
        virtual void equip(AMateria *mat);
        virtual void unequip(int i);
        virtual void use(int i, ICharacter &target);
        virtual ~Character();
};

#endif