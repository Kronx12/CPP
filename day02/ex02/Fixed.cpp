/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 06:44:16 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 14:43:49 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int v) {
    value = (v << bits);
}

Fixed::Fixed(const float v) {
    value = roundf(v * (1 << bits));
}

Fixed::Fixed(const Fixed &fixed) {
    value = fixed.getRawBits();
}

/* OPERATOR */
void Fixed::operator=(const Fixed &fixed) { value = fixed.value; }
Fixed Fixed::operator+(const Fixed &fixed) { return (Fixed(fixed.toFloat() + toFloat())); }
Fixed Fixed::operator-(const Fixed &fixed) { return (Fixed(fixed.toFloat() - toFloat())); }
Fixed Fixed::operator*(const Fixed &fixed) { return (Fixed(fixed.toFloat() * toFloat())); }
Fixed Fixed::operator/(const Fixed &fixed) { return (Fixed(fixed.toFloat() / toFloat())); }

bool Fixed::operator>(const Fixed &fixed) { return (fixed.toFloat() > toFloat()); }
bool Fixed::operator<(const Fixed &fixed) { return (fixed.toFloat() < toFloat()); }
bool Fixed::operator>=(const Fixed &fixed) { return (fixed.toFloat() >= toFloat()); }
bool Fixed::operator<=(const Fixed &fixed) { return (fixed.toFloat() <= toFloat()); }
bool Fixed::operator==(const Fixed &fixed) { return (fixed.toFloat() == toFloat()); }
bool Fixed::operator!=(const Fixed &fixed) { return (fixed.toFloat() != toFloat()); }

Fixed &Fixed::operator++() {
    value++;
    return (*this);
}

Fixed Fixed::operator++(int x) {
    Fixed tmp = *this;
    ++(*this);
    return (tmp);
}

Fixed &Fixed::operator--() {
    value--;
    return (*this);
}

Fixed Fixed::operator--(int x) {
    Fixed tmp = *this;
    --(*this);
    return (tmp);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value) {
    out << value.toFloat();
    return (out);
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const {
    return (value);
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

int Fixed::toInt(void) const {
    return (value);
}

float Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << bits));
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
    if (f1.value < f2.value)
        return (f1);
    return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
    if (f1.value < f2.value)
        return (f2);
    return (f1);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) {
    if (f1.value < f2.value)
        return (f1);
    return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) {
    if (f1.value < f2.value)
        return (f2);
    return (f1);
}