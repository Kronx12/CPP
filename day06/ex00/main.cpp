/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 00:42:02 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/20 11:16:35 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
#include <string>
#include <math.h>
#include <sstream>
#include <iomanip>
# include <cstdlib>
# include <climits>
#include <sstream>

std::string get_char_val(long double value) {
    std::string res = "";
    if (isprint(static_cast<char>(value))) {
        res += "\'";
        res += static_cast<char>(value);
        res += "\'";
    } else if (isnan(value))
        res += "impossible";
    else
        res += "Non displayable";
    return (res);
}

std::string get_int_val(long double value) {
    std::string res = "";
    if (isnan(value) || static_cast<int>(value) == INT_MIN)
        res += "impossible";
    else if (isinf(value))
        res += "Non displayable";
    else
        res += static_cast<std::ostringstream*>( &(std::ostringstream() << static_cast<int>(value)) )->str();
    return (res);
}

std::string get_float_val(long double value) {
    std::string res = "";
    if (isinf(value) && value > 0)
        res += "+inff";
    else if (isinf(value) && value < 0)
        res += "-inff";
    else if (isnan(value))
        res += "nanf";
    else {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << static_cast<float>(value);
        res += stream.str();
        res += "f";
    }
    return (res);
}

std::string get_double_val(long double value) {
    std::string res = "";
    if (isinf(value) && value > 0)
        res += "+inf";
    else if (isinf(value) && value < 0)
        res += "-inf";
    else if (isnan(value))
        res += "nan";
    else {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(1) << static_cast<double>(value);
        res += stream.str();
    }
    return (res);
}

void        convert_value(std::string value) {
    long double val;
	char*	end;

    try {
        val = std::strtod(value.c_str(), &end);
        if (end[0])
            val = end[0];
        std::cout << "char: " << get_char_val(val) << std::endl;
        std::cout << "int: " << get_int_val(val) << std::endl;
        std::cout << "float: " << get_float_val(val) << std::endl;
        std::cout << "double: " << get_double_val(val) << std::endl;
    } catch (std::exception &e) {
        try {
            if (value.length() == 1) {
                val = static_cast<int>(value[0]);
                if (isprint(val)) {
                    std::cout << "char: " << get_char_val(val) << std::endl;
                    std::cout << "int: " << get_int_val(val) << std::endl;
                    std::cout << "float: " << get_float_val(val) << std::endl;
                    std::cout << "double: " << get_double_val(val) << std::endl;
                } else
                    std::cout << "Erreur, char value error !" << std::endl;
            }
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    //std::cout << "char: " << get_char_val(value) << std::endl;
}

int         main(int argc, char **argv) {
    if (argc != 2)
        std::cout << "Erreur, veuillez entrez seulement une valeur !" << std::endl;
    else
        convert_value(argv[1]);
    return 0;
}