/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 07:57:42 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 12:32:30 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
    protected:
        NinjaTrap();
    public:
        NinjaTrap(std::string pname);
        NinjaTrap(NinjaTrap const &ft);
        NinjaTrap &operator=(NinjaTrap const &other);
        void ninjaShoebox(const NinjaTrap &nt);
        void ninjaShoebox(const ClapTrap &ct);
        ~NinjaTrap();
};

#endif