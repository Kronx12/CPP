/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 13:56:49 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 14:01:47 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string str = std::string("HI THIS IS BRAIN");
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
    return (0);
}