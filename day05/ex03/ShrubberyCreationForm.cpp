/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:46:06 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 14:19:14 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string ptarget) :
    Form("Shrubbery", 145, 137), target(ptarget) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object) :
    Form("Shrubbery", 145, 137), target(object.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm&object) {
	Form::operator=(object);
	target = object.target;
    return *this;
}
    
ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > getExecNeed())
		throw Form::GradeTooLowException();
    else if (!getSign())
        throw Form::FormNotSignException();
    else {
        std::ofstream f;
        std::stringstream ss;
        ss << target << "_shrubbery";
        f.open(ss.str().c_str());
        f << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\";
        f.close();
    }
}
