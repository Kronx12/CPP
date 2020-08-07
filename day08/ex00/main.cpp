/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 01:07:59 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/29 02:46:09 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"


int main()
{
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
}