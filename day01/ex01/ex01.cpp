/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:29:50 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 09:28:19 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}

int main() {
    memoryLeak();
    return (0);
}