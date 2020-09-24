/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 13:56:49 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:34:42 by gbaud            ###   ########.fr       */
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