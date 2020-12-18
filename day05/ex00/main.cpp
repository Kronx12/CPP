/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:10:23 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 13:41:16 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat a("Initial", 150);
    // Check error constructor
    for (int i = -5; i < 155; i++)
        if (i < 5 || i > 145) {
            std::cout << "Grade : " << i << " : ";
            try {
                a = Bureaucrat("A", i);
            } catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
        }

    // Check error dec
    a = Bureaucrat("B", 5);
    
    std::cout << " ------ " << std::endl;
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Increment : " << a << " : " << std::endl;
        try {
            a.incGrade();
        } catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    }
    
    // Check error inc
    a = Bureaucrat("C", 145);

    std::cout << " ------ " << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "Decrement : " << a << " : " << std::endl;
        try {
            a.decGrade();
        } catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    }
    return 0;
}