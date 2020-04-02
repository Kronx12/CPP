/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:35:13 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 11:38:29 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperTrap_HPP
#define SuperTrap_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
    public:
        SuperTrap(std::string pname);
        SuperTrap(SuperTrap const &ft);
        SuperTrap &operator=(SuperTrap const &other);
        void meleeAttack(const std::string &target);
        void rangedAttack(const std::string &target);
        ~SuperTrap();
};

#endif