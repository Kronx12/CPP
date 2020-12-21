/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:31:56 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/21 13:15:33 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
T min(const T& a,const T& b) { return (a < b ? a : b); }

template <typename T>
T max(const T& a,const T& b) { return (a > b ? a : b); }

template <typename T>
void swap(T& a, T& b) { 
    T tmp = a;
    a = b;
    b = tmp;
}

#endif
