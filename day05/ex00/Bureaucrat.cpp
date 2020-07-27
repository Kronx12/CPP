/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 00:14:35 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/24 01:51:27 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string pname, int pgrade) : name(pname) {
	if (pgrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (pgrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = pgrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat&object) : name(object.getName()), grade(object.getGrade()) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &object) {
	name = object.getName();
	grade = object.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur) {
	os << bur.getName() << ", bureaucrate grade " << bur.getGrade() << ".";
	return os;	
}

std::string Bureaucrat::getName() const {
	return (name);
}

int Bureaucrat::getGrade() const {
	return (grade);
}

void Bureaucrat::incGrade() {
	grade--;
	if (grade < 1)
		grade = 1;
}

void Bureaucrat::decGrade() {
	grade++;
	if (grade > 150)
		grade = 150;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void){ return; }
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &obj)
{
	*this = obj;
	return;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { return; }
Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &r) 
{
	(void)r;
	return (*this);
}
const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Error: Grade too high (<1)"); }

Bureaucrat::GradeTooLowException::GradeTooLowException(void) { return; }
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &obj)
{
	*this = obj;
	return;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { return; }
Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &r) 
{
	(void)r;
	return (*this);
}
const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Error: Grade too low (>150)"); }