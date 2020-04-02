/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:30:51 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/15 15:49:04 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
    private:
        Sorcerer();
        std::string nom;
        std::string titre;
    public:
        Sorcerer(std::string pnom, std::string ptitre);
        Sorcerer(const Sorcerer &other);
        Sorcerer &operator=(const Sorcerer &other);
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const &victim) const;
        ~Sorcerer();
};
std::ostream &operator<<(std::ostream &os, const Sorcerer &other);

#endif