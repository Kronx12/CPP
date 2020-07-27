/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:10:23 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/27 23:34:51 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    try {
        Bureaucrat b = Bureaucrat("Toto", 151);        
    } catch(const std::exception& e ) { std::cerr << e.what() << '\n'; }
    try {
        Bureaucrat b = Bureaucrat("Toto", 0);        
    } catch(const std::exception& e ) { std::cerr << e.what() << '\n'; }
    
    Bureaucrat b = Bureaucrat("Toto", 3);

    b = Bureaucrat("Toto", 150);
    std::cout << b << std::endl;
    b.decGrade();
    std::cout << b << std::endl;
    b.incGrade();
    std::cout << b << std::endl;
    
    b = Bureaucrat("Toto", 1);
    ShrubberyCreationForm s_form = ShrubberyCreationForm("tmp");
    RobotomyRequestForm r_form = RobotomyRequestForm("tmp");
    PresidentialPardonForm p_form = PresidentialPardonForm("tmp");
    
    try { s_form.execute(b); }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    b.signForm(s_form);
    b.executeForm(s_form);
    
    std::cout << std::endl;
    
    try { r_form.execute(b); }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    b.signForm(r_form);
    b.executeForm(r_form);
    
    
    std::cout << std::endl;
    
    try { p_form.execute(b); }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    b.signForm(p_form);
    b.executeForm(p_form);

    std::cout << std::endl;

    Intern i = Intern();
    Form *f = i.makeForm("shuberry creation", "Bender");
    std::cout << *f << std::endl;
    b.signForm(*f);
    b.executeForm(*f);

    return 0;
}