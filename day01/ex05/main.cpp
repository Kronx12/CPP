/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 14:03:47 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:36:59 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int main() {
    Human bob;

    std::cout << bob.identifier() << std::endl;
    std::cout << bob.getBrain().identifier() << std::endl;
}
