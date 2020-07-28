/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 02:14:30 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/28 12:59:25 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <random>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h> 

struct Data { std::string s1; int n; std::string s2; };

std::string random_string(std::size_t length)
{
    const std::string CHARACTERS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);
    std::string random_string;
    for (std::size_t i = 0; i < length; ++i)
        random_string += CHARACTERS[distribution(generator)];
    return random_string;
}

void    *serialize(void) {
    Data tmp_data;
    std::stringstream ss;
    
    srand(time(0));
    
    tmp_data.s1 = random_string(8);
    tmp_data.n = rand();
    tmp_data.s2 = random_string(8);
    
    ss << tmp_data.s1 << tmp_data.n << tmp_data.s2;
    
    char *res;
    if (!(res = (char *)malloc((sizeof(char) * ss.str().length()) + 1)))
        return (nullptr);
    strlcpy(res, ss.str().c_str(), ss.str().length() + 1);
    return (res);
}

Data * deserialize(void * raw) {
    Data *tmp_data = new Data;
    int len = strlen((char *)raw);
    int i = -1;
    
    while (++i < 8)
        tmp_data->s1 += ((char *)raw)[i];
        
    std::string val = "";
    while (++i < len - 8)
        val += ((char *)raw)[i];
    tmp_data->n = atoi(val.c_str());
    
    i--;
    while (++i < len)
        tmp_data->s2 += ((char *)raw)[i];
    
    return (tmp_data);
}

int     main() {
    std::cout << "Serialization :" << std::endl;
    void *s_data = serialize();
    std::cout << (char *)s_data << std::endl;
    
    std::cout << std::endl << "Deserialization :" << std::endl;
    Data *tmp_data = deserialize(s_data);
    std::cout << tmp_data->s1 << std::endl;
    std::cout << tmp_data->n << std::endl;
    std::cout << tmp_data->s2 << std::endl;

    return 0;
}