/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:51:50 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/19 08:22:45 by gbaud            ###   ########lyon.fr   */
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
        const std::string &getName() const;
        AMateria *getI(int i) const;
        void equip(AMateria *mat);
        void unequip(int i);
        void use(int i, ICharacter &target);
        ~Character();
};

#endif