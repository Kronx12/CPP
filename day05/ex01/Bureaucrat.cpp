/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 00:14:35 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 13:55:57 by gbaud            ###   ########lyon.fr   */
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
	if (this == &object) return(*this);
	this->~Bureaucrat();
	return *new(this) Bureaucrat(object);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur) {
	os << bur.getName() << ", bureaucrate grade " << bur.getGrade();
	return os;
}

std::string Bureaucrat::getName() const { return (name); }
int Bureaucrat::getGrade() const { return (grade); }

void Bureaucrat::incGrade() {
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}
void Bureaucrat::decGrade() {
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++; 
}

void Bureaucrat::signForm(Form &f) {
	try {
		f.beSigned(*this);
		std::cout << *this << " signs " << f << std::endl;
	} catch (const std::exception& e) {
		std::cout << *this << " cant sign " << f << " beacause grade is to low" << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Error: Grade too high (<1)"); }
const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Error: Grade too low (>150)"); }

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called" << std::endl;
}