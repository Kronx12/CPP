/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 22:24:18 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/28 23:24:42 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *arr, int len, void(*fn)(T)) {
    for (int i = 0; i < len; i++)
        fn(arr[i]);
}

template <typename T>
void show(T i) {
    std::cout << i << std::endl;
}

int main() {
    int tmp[5] = {1, 2, 3, 4, 5};
    
    char tmp_2[5] = {'a', 'b', 'c', 'd', 'e'};
    
    iter(tmp, 5, &show);
    iter(tmp_2, 5, &show);
    return 0;
}