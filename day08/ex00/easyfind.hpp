/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 01:07:55 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/29 02:47:02 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <exception>

template <typename T>
int &easyfind(T& list, int value) {
    typename T::iterator it;
    
	if (list.empty() == true)
		throw(std::exception());
    it = std::find(list.begin(), list.end(), value);
	if (it == list.end())
		throw(std::exception());
	return (*it);
}