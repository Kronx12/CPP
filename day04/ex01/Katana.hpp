/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Katana.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:20:56 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/16 14:23:14 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KATANA_HPP
#define KATANA_HPP
#include "AWeapon.hpp"

class Katana : public AWeapon {
    private:
    public:
        Katana();
        Katana(const Katana &katana);
        Katana &operator=(const Katana &katana);
        void attack() const;
        ~Katana();
};

#endif