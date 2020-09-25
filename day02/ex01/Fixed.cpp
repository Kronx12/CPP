/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 06:44:16 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/25 10:49:26 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int v) : value(v << bits) {
    std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float v) : value(roundf(v * (1 << bits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    value = fixed.getRawBits();
}

void Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    value = fixed.getRawBits();
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
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

int Fixed::toInt(void) const {
    return (value >> bits);
}

float Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << bits));
}