/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:50:18 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/29 11:58:54 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include<algorithm> 

Span::Span(unsigned int N) {
    arr = new int[N];
    max = N;
    actual = 0;
}

void Span::addNumber(int nb) {
    if (actual >= max)
        throw std::exception();
    arr[actual] = nb;
    actual++;
}

int Span::shortestSpan() {
    int b_res = -1;
    
    if (actual <= 1)
        throw std::exception();
    for (unsigned int i = 1; i < actual; i++)
        if (abs(arr[i] - arr[i - 1]) < b_res || b_res == -1)
            b_res = abs(arr[i] - arr[i - 1]);
    return (b_res);
}

int Span::longestSpan() {
    int b_res = -1;
    
    if (actual <= 1)
        throw std::exception();
    for (unsigned int i = 1; i < actual; i++)
        if (abs(arr[i] - arr[i - 1]) > b_res || b_res == -1)
            b_res = abs(arr[i] - arr[i - 1]);
    return (b_res);
}

Span::~Span() {
    delete arr;
}