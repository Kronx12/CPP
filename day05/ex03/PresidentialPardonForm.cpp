/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:46:23 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/27 16:47:18 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string ptarget) :
	Form("President", 25, 5), target(ptarget) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm&object) :
	Form(object.getName(), 25, 5), target(object.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &object) {
	Form::operator=(object);
	target = object.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > getExecNeed())
		throw Form::GradeTooLowException();
    else if (!getSign())
        throw Form::FormNotSignException();
    else
        std::cout << target << " a été pardonnée par Zafod Beeblebrox" << std::endl;
}