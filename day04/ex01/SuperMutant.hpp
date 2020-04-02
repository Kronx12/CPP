/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:27:47 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 11:01:44 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy {
    private:
    public:
        SuperMutant();
        SuperMutant(const SuperMutant &sm);
        SuperMutant &operator=(const SuperMutant &sm);
        void takeDamage(int dmg);
        ~SuperMutant();
};

#endif