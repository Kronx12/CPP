/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:50:13 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/29 12:08:28 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main() {
    Span sp = Span(5);
    Span sp2 = Span(5);
    
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    try { sp.addNumber(11); }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    
    sp2.addNumber(3);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    try { std::cout << sp2.shortestSpan() << std::endl; }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    
    try { std::cout << sp2.longestSpan() << std::endl; }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
}
