/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:28:31 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/16 10:38:20 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim {
    private:
        Peon();
    public:
        Peon(std::string pname);
        Peon(const Peon &other);
        Peon &operator=(const Peon &other);
        void getPolymorphed() const;
        ~Peon();
};

#endif