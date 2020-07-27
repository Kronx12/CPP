/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 00:14:26 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/24 01:47:54 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat(std::string pname, int pgrade);
		Bureaucrat(const Bureaucrat&);
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat&);
		class GradeTooHighException : public std::exception
		{
			public:
				
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &obj);
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException &operator=(GradeTooHighException const &r);
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &obj);
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException &operator=(GradeTooLowException const &r);
				virtual const char* what() const throw();
			
		};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur);

#endif