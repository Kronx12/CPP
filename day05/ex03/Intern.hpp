/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:18:51 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/28 00:35:38 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern {
	private:
		static std::string lst[3];
	public:
		Intern();
		Intern(const Intern&);
		~Intern();
		Intern &operator=(const Intern&);
		Form *makeForm(std::string type, std::string name);
		Form *execShrubbery(std::string target);
		Form *execRobotomy(std::string target);
		Form *execPresidential(std::string target);
};

#endif