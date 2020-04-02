/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:52:53 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/18 12:25:12 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad {
    private:
        int count;
	    ISpaceMarine **units;
    public:
        Squad();
        Squad(const ISquad &other);
        Squad &operator=(const ISquad &other);
        int getCount() const;
        ISpaceMarine *getUnit(int i) const;
        int push(ISpaceMarine *ism);
        ~Squad();
};

#endif