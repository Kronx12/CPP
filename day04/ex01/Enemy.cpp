/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 10:41:32 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 07:05:15 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int php, const std::string &ptype) : 
    hp(php), type(ptype) {}

Enemy::Enemy(const Enemy &enemy) : 
    hp(enemy.hp), type(enemy.type) {}
    
Enemy &Enemy::operator=(const Enemy &enemy) {
    type = enemy.type;
    hp = enemy.hp;
    return (*this);
}

const std::string Enemy::getType() const { return (type); }
int Enemy::getHP() const { return (hp); }

void Enemy::takeDamage(int dmg) {
    hp -= dmg;
    if (hp <= 0)
        delete this;
}

Enemy::~Enemy() {};