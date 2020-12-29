/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:50:18 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/29 12:08:18 by dev              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp" 

Span::Span(unsigned int N) : max(N) {}
Span::Span(const Span &other) : max(other.max), vec(std::vector<int>(other.vec)) {}
Span &Span::operator=(const Span &other) {
    if (this == &other) return(*this);
    this->~Span();
    return *new(this) Span(other);
}

void Span::addNumber(int nb) {
    if (vec.size() >= max)
        throw MaxElementException();
    vec.push_back(nb);
}

void Span::addNumber(int s, int e) {
    if (vec.size() + static_cast<unsigned long>(e) - static_cast<unsigned long>(s) > max)
        throw MaxElementException();
    for (; s < e; s++)
        vec.push_back(s);
}

int Span::shortestSpan() {
    if (vec.size() <= 1)
        throw EmptySpanException();
    return (*std::min_element(vec.begin(), vec.end()));
}

int Span::longestSpan() {
    if (vec.size() <= 1)
        throw EmptySpanException();
    return (*std::max_element(vec.begin(), vec.end()));
}

const char *Span::MaxElementException::what() const throw() { return ("Error: Maximum number of elements reached"); }
const char *Span::EmptySpanException::what() const throw() { return ("Error: Span is empty or just have one element"); }

Span::~Span() {}