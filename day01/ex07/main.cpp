/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 06:18:53 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/14 06:27:13 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Erreur d'arguments" << std::endl;
        exit(1);
    }
    std::ifstream input_f(argv[1]);
    std::stringstream ss;
    ss << argv[1] << ".replace" << std::endl;
    std::ofstream output_f(ss.str());
    std::string line;
    std::string src = argv[2];
    std::string dst = argv[3];
    while (std::getline(input_f, line)) {
        while (true) {
            size_t pos = line.find(src);
            if (pos != std::string::npos)
                line.replace(pos, src.length(), dst);
            else 
                break;
        }
        output_f << line << '\n';
    }
    return (0);
}