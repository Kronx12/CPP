/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 14:59:39 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:12:13 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &mat);
        Cure &operator=(const Cure &mat);
        AMateria *clone() const;
        virtual void use(ICharacter &target);
        ~Cure();
};

#endif