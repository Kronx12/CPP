/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unicorn.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 06:24:58 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 06:25:42 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNICORN_HPP
#define UNICORN_HPP
#include "Victim.hpp"

class Unicorn : public Victim {
    private:
        Unicorn();
    public:
        Unicorn(std::string pname);
        Unicorn(const Unicorn &other);
        Unicorn &operator=(const Unicorn &other);
        void getPolymorphed() const;
        ~Unicorn();
};

#endif