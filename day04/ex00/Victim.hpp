/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:29:06 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/17 05:16:53 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim {
    private:
        Victim();
        std::string nom;
    public:
        Victim(std::string pnom);
        Victim(const Victim &other);
        Victim &operator=(const Victim &other);
        std::string getName() const;
        virtual void getPolymorphed() const;
        ~Victim();
};
std::ostream &operator<<(std::ostream &os, const Victim &other);

#endif