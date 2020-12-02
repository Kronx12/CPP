/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:37:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/02 05:28:01 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAP_HPP
#define FRAGTAP_HPP

#include "ClapTrap.hpp"
#include <stdlib.h>

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string pname);
        FragTrap(FragTrap const &ft);
        FragTrap &operator=(FragTrap const &other);
        void vaulthunter_dot_exe(const std::string &target);
        ~FragTrap();
};

#endif