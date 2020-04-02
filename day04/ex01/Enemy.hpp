/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:27:47 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 10:55:03 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy {
    private:
        Enemy();
        int hp;
        std::string type;
    public:
        Enemy(int hp, const std::string &type);
        Enemy(const Enemy &enemy);
        Enemy &operator=(const Enemy &enemy);
        const std::string getType() const;
        int getHP() const;
        virtual void takeDamage(int dmg);
        virtual ~Enemy();
};

#endif