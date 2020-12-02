/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/02 05:20:12 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string pname);
        ScavTrap(ScavTrap const &ft);
        ScavTrap &operator=(ScavTrap const &other);
        void challengeNewcomer(const std::string &target);
        ~ScavTrap();
};

#endif