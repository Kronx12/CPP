/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dragon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 08:27:47 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:29:18 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAGON_HPP
#define DRAGON_HPP
#include "Enemy.hpp"

class Dragon : public Enemy {
    private:
    public:
        Dragon();
        Dragon(const Dragon &rs);
        Dragon &operator=(const Dragon &rs);
        ~Dragon();
};

#endif