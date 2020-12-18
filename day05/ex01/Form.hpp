/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 02:05:55 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 13:55:47 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string name;
		const int sign_need;
		const int sign_exec;
		bool sign;
	public:
		Form(std::string pname, int pneed_sign, int pneed_exec);
		Form &operator=(const Form&);
		Form(const Form&);

		std::string getName() const;
		int getSignNeed() const;
		int getExecNeed() const;
		int getSign() const;

		int beSigned(Bureaucrat& bureaucrat);
		
		class GradeTooHighException : public std::exception { virtual const char* what() const throw(); };
		class GradeTooLowException : public std::exception { virtual const char* what() const throw(); };
		
		~Form();
};
std::ostream& operator<<(std::ostream& os, const Form& bur);

#endif