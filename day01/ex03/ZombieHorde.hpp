/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 09:20:21 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:31:34 by gbaud            ###   ########.fr       */
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