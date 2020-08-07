/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:50:15 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/29 11:46:34 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Span {
    private:
        unsigned int max;
        unsigned int actual;
        int *arr;
        Span();

    public:
        Span(unsigned int N);

        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();

        ~Span();
};