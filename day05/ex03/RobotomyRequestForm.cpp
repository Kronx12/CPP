/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:46:17 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/27 16:47:09 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string ptarget) :
	Form("Robotomy", 72, 45), target(ptarget) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm&object) :
	Form(object.getName(), 72, 45), target(object.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &object) {
	Form::operator=(object);
	target = object.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > getExecNeed())
		throw Form::GradeTooLowException();
    else if (!getSign())
        throw Form::FormNotSignException();
    else {
		std::cout << "BrrrrrrrrBrrrrrrrrr" << std::endl;
		std::cout << target << " has been succesfully robotomised\n";
    }
}