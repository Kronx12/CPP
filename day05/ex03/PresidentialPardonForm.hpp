/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:46:20 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/27 16:33:24 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		PresidentialPardonForm();
		std::string target;
	public:
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm&);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm&);
		void execute(Bureaucrat const &executor) const;
};

#endif