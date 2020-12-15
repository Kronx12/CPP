/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:42:00 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:12:16 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice &mat);
        Ice &operator=(const Ice &mat);
        AMateria *clone() const;
        virtual void use(ICharacter &target);
        ~Ice();
};

#endif