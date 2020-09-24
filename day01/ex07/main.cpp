/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 06:18:53 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 10:59:28 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <fstream>
#include <iostream>

void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
    size_t pos = data.find(toSearch);
    while( pos != std::string::npos) {
        data.replace(pos, toSearch.size(), replaceStr);
        pos = data.find(toSearch, pos + replaceStr.size());
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Erreur d'arguments" << std::endl;
        exit(1);
    }
    std::ifstream input_f(argv[1]);
    std::stringstream ss;
    ss << argv[1] << ".replace";
    std::ofstream output_f(ss.str());
    std::string line;
    std::string src = argv[2];
    std::string dst = argv[3];
    while (std::getline(input_f, line)) {
        findAndReplaceAll(line, src, dst);
        output_f << line << '\n';
    }
    return (0);
}