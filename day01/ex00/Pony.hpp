/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 09:08:36 by guillaume         #+#    #+#             */
/*   Updated: 2020/09/23 16:40:01 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {    
    public:
        Pony(std::string pname, int pyear);

        void setName(std::string);
        void setYear(int year);

        std::string getName();
        int getYear();

        void jump();

    private:
        std::string name;
        int year;
};

#endif