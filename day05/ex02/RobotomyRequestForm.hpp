/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:46:13 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/27 16:33:33 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		RobotomyRequestForm();
		std::string target;
	public:
		RobotomyRequestForm(const std::string ptarget);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm&);
		void execute(Bureaucrat const &executor) const;
};

#endif