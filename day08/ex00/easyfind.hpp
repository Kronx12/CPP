/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 01:07:55 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/29 11:42:06 by dev              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <exception>

template <typename T>
int &easyfind(T list, const int value) {
    typename T::iterator it;
    
	if (list.empty())
		throw(std::exception());
    it = std::find(list.begin(), list.end(), value);
	if (it == list.end())
		throw(std::exception());
	return (*it);
}

#endif