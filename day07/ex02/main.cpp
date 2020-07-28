/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 23:28:14 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/29 01:02:55 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> arr = Array<int>(3);
    arr[0] = 1;
    
    std::cout << "Arr1 before Arr2 modification" << std::endl;
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;

    Array<int> arr2 = arr;
    arr2[0] = 2;
    
    std::cout << "Arr1 after Arr2 modification" << std::endl;
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;
        
    std::cout << "Arr2 after Arr2 modification" << std::endl;
    for (int i = 0; i < arr2.size(); i++)
        std::cout << arr2[i] << std::endl;
}