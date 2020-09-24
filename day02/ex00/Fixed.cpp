/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 06:44:16 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 20:38:02 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

Fixed::Fixed() : value(0) {
    cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed) {
    cout << "Copy constructor called" << endl;
    value = fixed.getRawBits();
}

void Fixed::operator=(const Fixed &fixed) {
    cout << "Assignation operator called" << endl;
    value = fixed.getRawBits();
}

Fixed::~Fixed() {
    cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) const {
    cout << "getRawBits member function called" << endl;
    return (value);
}

void Fixed::setRawBits(int const raw) {
    cout << "setRawBits member function called" << endl;
    value = raw;
}