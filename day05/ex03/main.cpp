/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:10:23 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 14:26:42 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main() {
    Bureaucrat b = Bureaucrat("Toto", 1);
    Intern i = Intern();

    Form *f1 = i.makeForm("shuberry creation", "Bender");
    Form *f2 = i.makeForm("robotomy request", "Bender");
    Form *f3 = i.makeForm("presidential pardon", "Bender");

    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;
    
    b.signForm(*f1);
    b.executeForm(*f1);
    b.signForm(*f2);
    b.executeForm(*f2);
    b.signForm(*f3);
    b.executeForm(*f3);

    delete f1;
    delete f2;
    delete f3;
    return 0;
}