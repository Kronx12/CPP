/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 02:05:52 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/27 16:10:11 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string pname, int pneed_sign, int pneed_exec) : name(pname), sign(false) {
	if (pneed_sign < 1 || pneed_exec < 1)
		throw Form::GradeTooHighException();
	else if (pneed_sign > 150 || pneed_exec > 150)
		throw Form::GradeTooLowException();
	else {
		sign_need = pneed_exec;
		sign_exec = pneed_sign;
	}
}

Form::Form(const Form&object) : name(object.getName()),
								sign(object.getSign()),
								sign_need(object.getSignNeed()),
								sign_exec(object.getExecNeed()) {}

Form &Form::operator=(const Form &object) {
	name = object.getName();
	sign = object.getSign();
	sign_need = object.getSignNeed();
	sign_exec = object.getExecNeed();
	return (*this);
}

std::string Form::getName() const { return name; }
int Form::getSignNeed() const { return sign_need; }
int Form::getExecNeed() const { return sign_exec; }
bool Form::getSign() const { return sign; }

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= sign_need)
		sign = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& bur) {
	os << bur.getName()
	<< ", form state "
	<< bur.getSign()
	<< " Grade Need For Sign "
	<< bur.getSignNeed()
	<< " Grade Need For Execute "
	<< bur.getExecNeed();
	return os;	
}

Form::~Form() {
	std::cout << "Destructor called" << std::endl;
}

Form::GradeTooHighException::GradeTooHighException(void){ return; }
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
	return;
}
Form::GradeTooHighException::~GradeTooHighException(void) throw() { return; }
Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}
const char* Form::GradeTooHighException::what() const throw() { return ("Error: Grade too high (<1)"); }

Form::GradeTooLowException::GradeTooLowException(void) { return; }
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
	return;
}
Form::GradeTooLowException::~GradeTooLowException(void) throw() { return; }
Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}
const char* Form::GradeTooLowException::what() const throw() { return ("Error: Grade too low (>150)"); }

Form::FormNotSignException::FormNotSignException(void) { return; }
Form::FormNotSignException::FormNotSignException(FormNotSignException const &obj)
{
	*this = obj;
	return;
}
Form::FormNotSignException::~FormNotSignException(void) throw() { return; }
Form::FormNotSignException &Form::FormNotSignException::operator=(FormNotSignException const &r) 
{
	(void)r;
	return (*this);
}
const char* Form::FormNotSignException::what() const throw() { return ("Error: Form not signed"); }