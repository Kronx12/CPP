/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 02:50:13 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/29 12:07:50 by dev              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main() {
    Span sp = Span(5);
    Span sp2 = Span(5);
    Span sp3 = Span(1000000);
    
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    try { sp.addNumber(11); }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    try { std::cout << sp2.shortestSpan() << std::endl; }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    
    try { std::cout << sp2.longestSpan() << std::endl; }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    
    sp2.addNumber(5, 10);
    try { sp2.addNumber(5, 10); }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    
    sp3.addNumber(0, 1000000); 
    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
    
    Span sp4(sp3);
    std::cout << sp4.shortestSpan() << std::endl;
    std::cout << sp4.longestSpan() << std::endl;
    
    sp2 = sp4;
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    
    Span sp5(1);
    sp5.addNumber(1);
    
    try { std::cout << sp5.shortestSpan() << std::endl; }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    
    try { std::cout << sp5.longestSpan() << std::endl; }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
}
