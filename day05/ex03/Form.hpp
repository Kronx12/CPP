/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 02:05:55 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/27 16:12:22 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		Form();
		std::string name;
		bool sign;
		int sign_need;
		int sign_exec;
	public:
		Form(std::string pname, int pneed_sign, int pneed_exec);
		Form(const Form&);
		Form &operator=(const Form&);
		int getSignNeed() const;
		int getExecNeed() const;
		bool getSign() const;
		std::string getName() const;
		void beSigned(Bureaucrat& bureaucrat);
		
		virtual void execute(Bureaucrat const &executor) const = 0;
		virtual ~Form() = 0;;
		
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &obj);
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException &operator=(GradeTooHighException const &r);
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &obj);
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException &operator=(GradeTooLowException const &r);
				virtual const char* what() const throw();
		};
		class FormNotSignException : public std::exception {
			public:
				FormNotSignException(void);
				FormNotSignException(FormNotSignException const &obj);
				virtual ~FormNotSignException(void) throw();
				FormNotSignException &operator=(FormNotSignException const &r);
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, const Form& bur);

#endif