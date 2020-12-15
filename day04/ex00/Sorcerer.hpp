/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:30:51 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:18:18 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
    private:
        Sorcerer();
        std::string name;
        std::string title;
    public:
        Sorcerer(std::string pname, std::string ptitle);
        Sorcerer(const Sorcerer &other);
        Sorcerer &operator=(const Sorcerer &other);
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const &victim) const;
        ~Sorcerer();
};
std::ostream &operator<<(std::ostream &os, const Sorcerer &other);

#endif