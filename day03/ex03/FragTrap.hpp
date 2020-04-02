/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 07:46:15 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAP_HPP
#define FRAGTAP_HPP

#include "ClapTrap.hpp"
#include <time.h>

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string pname);
        FragTrap(FragTrap const &ft);
        FragTrap &operator=(FragTrap const &other);
        void vaulthunter_dot_exe(const std::string &target);
        ~FragTrap();
};

#endif