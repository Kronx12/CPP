/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:50:15 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/29 11:51:43 by dev              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm> 
#include <vector>

class Span {
    private:
        unsigned int max;
        std::vector<int> vec;
        Span();

    public:
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);

        void addNumber(int nb);
        void addNumber(int s, int e);
        int shortestSpan();
        int longestSpan();

        unsigned int getMax();
        std::vector<int> getVec();

        class MaxElementException : public std::exception { virtual const char *what() const throw(); };
        class EmptySpanException : public std::exception { virtual const char *what() const throw(); };

        ~Span();
};

#endif