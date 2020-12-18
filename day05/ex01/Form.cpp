/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 02:05:52 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 13:55:29 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string pname, int psign_need, int psign_exec) :
	name(pname), sign_need(psign_need), sign_exec(psign_exec), sign(false) {
	if (psign_need < 1 || psign_exec < 1)
		throw Form::GradeTooHighException();
	else if (psign_need > 150 || psign_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form&object) : name(object.getName()),
								sign_need(object.getSignNeed()),
								sign_exec(object.getExecNeed()),
								sign(object.getSign()) {}

Form &Form::operator=(const Form &object) {
	if (this == &object) return(*this);
	this->~Form();
	return *new(this) Form(object);
}

std::string Form::getName() const { return name; }
int Form::getSignNeed() const { return sign_need; }
int Form::getExecNeed() const { return sign_exec; }
int Form::getSign() const { return sign; }

int Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= sign_need) {
		sign = true;
		return 1;
	} else {
		throw Form::GradeTooLowException();
		return 0;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& bur) {
	os << bur.getName() << ", form state " << bur.getSign() << " Grade Need For Sign "
	<< bur.getSignNeed() << " Grade Need For Execute " << bur.getExecNeed();
	return os;	
}

const char* Form::GradeTooHighException::what() const throw() { return ("Error: Grade too high (<1)"); }
const char* Form::GradeTooLowException::what() const throw() { return ("Error: Grade too low (>150)"); }

Form::~Form() {
	std::cout << "Destructor called" << std::endl;
}