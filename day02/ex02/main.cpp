/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 10:26:53 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 14:42:07 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main () {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}
/*
int main(void) {
    Fixed a;
    Fixed c;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << "+     : " << (a + a) << std::endl;
    std::cout << "-     : " << (a - a) << std::endl;
    std::cout << "*     : " << (a * a) << std::endl;
    std::cout << "/     : " << (a / a) << std::endl;
    std::cout << "<     : " << (a < a) << std::endl;
    std::cout << ">     : " << (a > a) << std::endl;
    std::cout << "<=    : " << (a <= a) << std::endl;
    std::cout << ">=    : " << (a >= a) << std::endl;
    std::cout << "==    : " << (a == a) << std::endl;
    std::cout << "!=    : " << (a != a) << std::endl;
    std::cout << "++ :" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << "-- :" << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    
    a.setRawBits(42);
    c.setRawBits(2);
    
    std::cout << "===" << std::endl;
    std::cout << Fixed::min(a, c) << std::endl;
    std::cout << Fixed::max(a, c) << std::endl;
    //std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}
*/