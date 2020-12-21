/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 23:28:14 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/21 13:43:38 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    std::cout << "=== Unsigned Int section ===" << std::endl;
    Array<unsigned int> int_arr_a = Array<unsigned int>(10);
    Array<unsigned int> int_arr_b = Array<unsigned int>(20);

    // Initialisation
    for (unsigned int i = 0; i < int_arr_a.size(); i++)
        int_arr_a[i] = i;
    for (unsigned int i = 0; i < int_arr_b.size(); i++)
        int_arr_b[i] = i;

    // Print
    std::cout << "Print int_arr_a :" << std::endl; 
    for (unsigned int i = 0; i < int_arr_a.size(); i++)
        std::cout << int_arr_a[i] << ",";
    std::cout << std::endl << std::endl;
    std::cout << "Print int_arr_b :" << std::endl; 
    for (unsigned int i = 0; i < int_arr_b.size(); i++)
        std::cout << int_arr_b[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Assignation int_arr_b into int_arr_a:" << std::endl;
    int_arr_a = int_arr_b;

    std::cout << "Print int_arr_a :" << std::endl; 
    for (unsigned int i = 0; i < int_arr_a.size(); i++)
        std::cout << int_arr_a[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Copy constructor int_arr_c from int_arr_a:" << std::endl;
    Array<unsigned int> int_arr_c(int_arr_a);
    std::cout << "Print int_arr_c :" << std::endl; 
    for (unsigned int i = 0; i < int_arr_c.size(); i++)
        std::cout << int_arr_c[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Try / Catch :" << std::endl;
    try {
        std::cout << int_arr_c[int_arr_c.size()] << std::endl;
    } catch ( std::exception &e ) { std::cout << e.what() << std::endl; }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "=== Char section ===" << std::endl;
    Array<char> char_arr_a = Array<char>(10);
    Array<char> char_arr_b = Array<char>(20);

    // Initialisation
    for (unsigned int i = 0; i < char_arr_a.size(); i++)
        char_arr_a[i] = static_cast<char>(i + 'a');
    for (unsigned int i = 0; i < char_arr_b.size(); i++)
        char_arr_b[i] = static_cast<char>(i + 'a');

    // Print
    std::cout << "Print char_arr_a :" << std::endl; 
    for (unsigned int i = 0; i < char_arr_a.size(); i++)
        std::cout << char_arr_a[i] << ",";
    std::cout << std::endl << std::endl;
    std::cout << "Print char_arr_b :" << std::endl; 
    for (unsigned int i = 0; i < char_arr_b.size(); i++)
        std::cout << char_arr_b[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Assignation char_arr_b into char_arr_a:" << std::endl;
    char_arr_a = char_arr_b;

    std::cout << "Print char_arr_a :" << std::endl; 
    for (unsigned int i = 0; i < char_arr_a.size(); i++)
        std::cout << char_arr_a[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Copy constructor char_arr_c from char_arr_a:" << std::endl;
    Array<char> char_arr_c(char_arr_a);
    std::cout << "Print char_arr_c :" << std::endl; 
    for (unsigned int i = 0; i < char_arr_c.size(); i++)
        std::cout << char_arr_c[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Try / Catch :" << std::endl;
    try {
        std::cout << char_arr_c[char_arr_c.size()] << std::endl;
    } catch ( std::exception &e ) { std::cout << e.what() << std::endl; }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "=== string section ===" << std::endl;
    Array<std::string> string_arr_a = Array<std::string>(10);
    Array<std::string> string_arr_b = Array<std::string>(20);

    // Initialisation
    for (unsigned int i = 0; i < string_arr_a.size(); i++)
        string_arr_a[i] = "a";
    for (unsigned int i = 0; i < char_arr_b.size(); i++)
        string_arr_b[i] = "b";

    // Print
    std::cout << "Print string_arr_a :" << std::endl; 
    for (unsigned int i = 0; i < string_arr_a.size(); i++)
        std::cout << string_arr_a[i] << ",";
    std::cout << std::endl << std::endl;
    std::cout << "Print string_arr_b :" << std::endl; 
    for (unsigned int i = 0; i < string_arr_b.size(); i++)
        std::cout << string_arr_b[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Assignation string_arr_b into string_arr_a:" << std::endl;
    string_arr_a = string_arr_b;

    std::cout << "Print string_arr_a :" << std::endl; 
    for (unsigned int i = 0; i < string_arr_a.size(); i++)
        std::cout << string_arr_a[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Copy constructor string_arr_c from string_arr_a:" << std::endl;
    Array<std::string> string_arr_c(string_arr_a);
    std::cout << "Print string_arr_c :" << std::endl; 
    for (unsigned int i = 0; i < string_arr_c.size(); i++)
        std::cout << string_arr_c[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Try / Catch :" << std::endl;
    try {
        std::cout << string_arr_c[string_arr_c.size()] << std::endl;
    } catch ( std::exception &e ) { std::cout << e.what() << std::endl; }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "=== Const Int section ===" << std::endl;
    const Array<int> c_int_arr_a = Array<int>(10);
    const Array<int> c_int_arr_b = Array<int>(10);

    // Initialisation
    for (unsigned int i = 0; i < c_int_arr_a.size(); i++)
        c_int_arr_a[i] = static_cast<int>(i);
    for (unsigned int i = 0; i < c_int_arr_b.size(); i++)
        c_int_arr_b[i] = static_cast<int>(i);

    // Print
    std::cout << "Print int_arr_a :" << std::endl; 
    for (unsigned int i = 0; i < c_int_arr_a.size(); i++)
        std::cout << c_int_arr_a[i] << ",";
    std::cout << std::endl << std::endl;
    std::cout << "Print int_arr_b :" << std::endl; 
    for (unsigned int i = 0; i < c_int_arr_b.size(); i++)
        std::cout << c_int_arr_b[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Copy constructor c_int_arr_c from c_int_arr_a:" << std::endl;
    const Array<int> c_int_arr_c(c_int_arr_a);
    std::cout << "Print int_arr_c :" << std::endl; 
    for (unsigned int i = 0; i < c_int_arr_c.size(); i++)
        std::cout << c_int_arr_c[i] << ",";
    std::cout << std::endl << std::endl;

    std::cout << "Try / Catch :" << std::endl;
    try {
        std::cout << c_int_arr_c[c_int_arr_c.size()] << std::endl;
    } catch ( std::exception &e ) { std::cout << e.what() << std::endl; }
    std::cout << std::endl;
    std::cout << std::endl;
}