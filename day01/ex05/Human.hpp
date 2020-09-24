/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 14:04:05 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:41:22 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {
    private:
        const Brain brain;

    public:
        Human();
        const Brain &getBrain() const;
        std::string identifier() const;
};

#endif