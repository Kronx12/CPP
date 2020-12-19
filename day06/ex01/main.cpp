/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 02:14:30 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/19 16:17:48 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h> 
#include <limits.h>

struct Data { std::string s1; int n; std::string s2; };

std::string random_string(std::size_t length)
{
    const std::string CHARACTERS =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::string random_string;
    for (std::size_t i = 0; i < length; ++i)
        random_string += CHARACTERS[rand() % CHARACTERS.length()];
    return random_string;
}

void    print_structure(Data *s) {
    std::cout << "{" << std::endl << 
    "\t" << s->s1 << std::endl <<
    "\t" << s->n << std::endl << 
    "\t" << s->s2 << std::endl <<
    "}" << std::endl << std::endl;
}

void    print_raw(void *raw) {
    std::string str(reinterpret_cast<char *>(raw));
    for (int i = 0; i < 20; i++)
        std::cout << std::hex << (static_cast<unsigned char>(str.at(i)) & 0xFF);
    std::cout << std::dec << std::endl;
}

void    *serialize(void) {
    Data tmp_data;
    std::stringstream ss;

    srand(time(NULL));
    tmp_data.s1 = random_string(8);
    tmp_data.n = rand();
    tmp_data.s2 = random_string(8);

    print_structure(&tmp_data);

    unsigned char bytes[5];
    unsigned long n = tmp_data.n;

    bytes[0] = (n >> 24) & 0xFF;
    bytes[1] = (n >> 16) & 0xFF;
    bytes[2] = (n >> 8) & 0xFF;
    bytes[3] = n & 0xFF;
    bytes[4] = 0;

    ss << tmp_data.s1 << bytes << tmp_data.s2;
    
    char *str = new char[21];

    for (size_t i = 0; i < ss.str().length(); i++)
        str[i] = ss.str().at(i);
    str[20] = 0;
    return (str);
}

Data *deserialize(void * raw) {
    std::string str(reinterpret_cast<char *>(raw));
    Data *tmp_data = new Data;
    int len;

    len = str.length();
    // Restore first string    
    for (int i = 0;i < 8; i++)
        tmp_data->s1 += str.at(i);
    // Restore int
    tmp_data->n = int(  static_cast<unsigned char>(str.at(8)) << 24 |
                        static_cast<unsigned char>(str.at(9)) << 16 |
                        static_cast<unsigned char>(str.at(10)) << 8 |
                        static_cast<unsigned char>(str.at(11)));
    // Restore second string
    for (int i = 12;i < 20; i++)
        tmp_data->s2 += str.at(i);
    return (tmp_data);
}

int     main() {
    std::cout << "Serialization :" << std::endl;
    void *s_data = serialize();
    print_raw(s_data);
    
    std::cout << std::endl << "Deserialization :" << std::endl;
    Data *tmp_data = deserialize(s_data);
    print_structure(tmp_data);

    delete[] reinterpret_cast<char *>(s_data);
    delete tmp_data;
    return 0;
}
