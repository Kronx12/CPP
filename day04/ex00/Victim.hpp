/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:29:06 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:11:19 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim {
    private:
        Victim();
        std::string name;
    public:
        Victim(std::string pname);
        Victim(const Victim &other);
        Victim &operator=(const Victim &other);
        std::string getName() const;
        virtual void getPolymorphed() const;
        ~Victim();
};
std::ostream &operator<<(std::ostream &os, const Victim &other);

#endif