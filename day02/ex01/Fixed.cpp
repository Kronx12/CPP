/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 06:44:16 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 08:55:19 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int v) {
    value = (v << bits);
}

Fixed::Fixed(const float v) {
    value = roundf(v * (1 << bits));
}

Fixed::Fixed(const Fixed &fixed) {
    value = fixed.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

void Fixed::operator=(const Fixed &fixed) {
    value = fixed.value;
    std::cout << "Assignation operator called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value) {
    out << value.toFloat();
    return (out);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw) {
    value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

int Fixed::toInt(void) const {
    return (value);
}

float Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << bits));
}