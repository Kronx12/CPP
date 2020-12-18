/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 14:46:11 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/18 14:17:50 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		ShrubberyCreationForm();
		std::string target;
	public:
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		void execute(Bureaucrat const &executor) const;
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
};

#endif