/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:00:35 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/18 19:10:27 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource {
    public:
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria *mat) = 0;
        virtual AMateria *createMateria(const std::string &type) = 0;
};

#endif