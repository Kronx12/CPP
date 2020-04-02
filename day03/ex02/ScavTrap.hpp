/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 07:48:01 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <time.h>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string pname);
        ScavTrap(ScavTrap const &ft);
        ScavTrap &operator=(ScavTrap const &other);
        void challengeNewcomer(const std::string &target);
        ~ScavTrap();
};

#endif