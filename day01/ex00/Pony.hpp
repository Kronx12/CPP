/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 09:08:36 by guillaume         #+#    #+#             */
/*   Updated: 2020/03/12 04:56:08 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {    
    public:
        Pony() {};
        Pony(std::string c_name) : name(c_name) {};
        void setName(std::string);
        std::string getName();
        void jump();

    private:
        std::string name;
};

#endif