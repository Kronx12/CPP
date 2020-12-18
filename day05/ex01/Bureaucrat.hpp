/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 00:14:26 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 13:55:13 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(std::string pname, int pgrade);
		Bureaucrat &operator=(const Bureaucrat&);
		Bureaucrat(const Bureaucrat&);

		std::string getName() const;
		int getGrade() const;

		void incGrade();
		void decGrade();

		void signForm(Form &f);

		class GradeTooHighException : public std::exception { virtual const char* what() const throw(); };
		class GradeTooLowException : public std::exception { virtual const char* what() const throw(); };

		~Bureaucrat();
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur);

#endif