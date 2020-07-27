/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:10:23 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/26 12:32:00 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b = Bureaucrat("Toto", 151);        
    } catch(const std::exception& e ) { std::cerr << e.what() << '\n'; }
    try {
        Bureaucrat b = Bureaucrat("Toto", 0);        
    } catch(const std::exception& e ) { std::cerr << e.what() << '\n'; }
    
    Form f = Form("Tmp_f", 2, 2);
    Bureaucrat b = Bureaucrat("Toto", 3);
    
    b.signForm(f);
    std::cout << b << std::endl;
    b.incGrade();
    std::cout << b << std::endl;
    
    b.signForm(f);
    b.decGrade();
    std::cout << b << std::endl;

    b = Bureaucrat("Toto", 150);
    std::cout << b << std::endl;
    b.decGrade();
    std::cout << b << std::endl;
    b.incGrade();
    std::cout << b << std::endl;
    return 0;
}