/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:18:53 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/28 00:38:06 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

std::string Intern::lst[3] = {
	"shuberry creation",
	"robotomy request",
	"presidential pardon"
};

Intern::Intern() {}
Intern::Intern(const Intern &) {}
Intern &Intern::operator=(const Intern &) { return (*this); }

Intern::~Intern() { std::cout << "Destructor called" << std::endl; }

typedef Form * (Intern::*form_constr) (std::string target);
Form *Intern::makeForm(std::string type, std::string name) {
	Form *res = nullptr;
	form_constr	constr [3] = {&Intern::execShrubbery, &Intern::execRobotomy, &Intern::execPresidential};

	for(int i = 0; i < 3; i++)
		if (type == lst[i])
			res = (this->*constr[i])(name);
	if (res != nullptr)
		std::cout << "Intern creates " << *res << std::endl;
	else
		std::cout << "Error, unrecognized Form type !" << std::endl;
	return (res);
}

Form *Intern::execShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::execRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::execPresidential(std::string target) {
	return new PresidentialPardonForm(target);
}