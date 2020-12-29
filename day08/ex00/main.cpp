/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 01:07:59 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/29 11:17:28 by dev              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"


int main()
{
	std::cout << "STD::VECTOR :" << std::endl;
	
	std::vector<int> vec;
	vec.push_back(12);
	vec.push_back(-5);
	vec.push_back(-35);
	vec.push_back(150);

	try {
		std::cout << easyfind(vec, -35) << std::endl;
		std::cout << easyfind(vec, -76552) << std::endl;
	} catch (std::exception& e) {
		std::cout << "Value not found" << std::endl;
	}
	try {
		std::cout << easyfind(vec, 12) << std::endl;
		std::cout << easyfind(vec, 150) << std::endl;
	} catch (std::exception& e) {
		std::cout << "Value not found" << std::endl;
	}
	try {
		std::vector<int> empty;
		easyfind(empty, 150000);
	} catch (std::exception& e) {
		std::cout << "Value not found" << std::endl;
	}
	
	
	
	std::cout << std::endl << "STD::LIST :" << std::endl;
	
	std::list<int> lst;
	lst.push_back(12);
	lst.push_back(-5);
	lst.push_back(-35);
	lst.push_back(150);

	try {
		std::cout << easyfind(lst, -35) << std::endl;
		std::cout << easyfind(lst, -76552) << std::endl;
	} catch (std::exception& e) {
		std::cout << "Value not found" << std::endl;
	}
	try {
		std::cout << easyfind(lst, 12) << std::endl;
		std::cout << easyfind(lst, 150) << std::endl;
	} catch (std::exception& e) {
		std::cout << "Value not found" << std::endl;
	}
	try {
		std::list<int> empty;
		easyfind(empty, 150000);
	} catch (std::exception& e) {
		std::cout << "Value not found" << std::endl;
	}
}