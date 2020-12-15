/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 15:00:35 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/15 08:17:49 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource {
    public:
        virtual ~IMateriaSource() {};
        virtual void learnMateria(AMateria *mat) = 0;
        virtual AMateria *createMateria(const std::string &type) = 0;
};

#endif