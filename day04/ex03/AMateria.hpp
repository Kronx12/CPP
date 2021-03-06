/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:15:41 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:13:36 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    private:
        AMateria();
    protected:
        unsigned int _xp;
        std::string type;
    public:
        AMateria(const std::string &type);
        AMateria(const AMateria &mat);
        AMateria &operator=(const AMateria &mat);
        const std::string &getType() const;
        unsigned int getXP() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
        virtual ~AMateria();
};

#endif