/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 09:20:21 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 13:51:44 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"
#include <iostream>

class ZombieHorde {
    private:
        Zombie *zombies;
        int count;
    public:
        ZombieHorde(int n);
        ~ZombieHorde();
        void announce();
};
#endif