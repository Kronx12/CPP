/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:43:01 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 14:46:09 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine{
    public:
        virtual ~ISpaceMarine() {}
        virtual ISpaceMarine *clone() const = 0;
        virtual void battleCry() const = 0;
        virtual void rangedAttack() const = 0;
        virtual void meleeAttack() const = 0;
};

#endif