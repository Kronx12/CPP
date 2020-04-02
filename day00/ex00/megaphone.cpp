/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 01:54:52 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/10 02:25:42 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define cout std::cout
#define endl std::endl

int main(int argc, char **argv) {
    int i, j;
    
    if (argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else if (argc > 1) {
        i = 0;
        while (++i < argc && (j = -1))
            while (argv[i][++j])
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    cout << (char)(argv[i][j] - 32);
                else
                    cout << argv[i][j];
        cout << endl;
    }
    return (0);
}
