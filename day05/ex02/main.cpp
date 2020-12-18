/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:10:23 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 14:08:39 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
    
    Bureaucrat a = Bureaucrat("Toto", 1);
    ShrubberyCreationForm s_form = ShrubberyCreationForm("tmp");
    RobotomyRequestForm r_form = RobotomyRequestForm("tmp");
    PresidentialPardonForm p_form = PresidentialPardonForm("tmp");
    
    try { s_form.execute(a); }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    a.signForm(s_form);
    a.executeForm(s_form);
    
    std::cout << " ------ " << std::endl;
    
    try { r_form.execute(a); }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    a.signForm(r_form);
    a.executeForm(r_form);
    
    std::cout << " ------ " << std::endl;
    
    try { p_form.execute(a); }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }
    a.signForm(p_form);
    a.executeForm(p_form);
    
    std::cout << " ------ " << std::endl;

    return 0;
}