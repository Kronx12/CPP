/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 12:33:09 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAP_HPP
#define FRAGTAP_HPP

#include "ClapTrap.hpp"
#include <time.h>

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string pname);
        FragTrap(FragTrap const &ft);
        FragTrap &operator=(FragTrap const &other);
        void vaulthunter_dot_exe(const std::string &target);
        ~FragTrap();
};

#endif