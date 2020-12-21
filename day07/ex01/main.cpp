/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:20:36 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/21 13:33:42 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void show(T const & i) {
    std::cout << i << std::endl;
}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

// Class test
class Awesome {
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// End class test

int main() {
    int int_arr[5] = {1, 2, 3, 4, 5};
    const int c_int_arr[5] = {1, 2, 3, 4, 5};

    float float_arr[5] = {1.2f, 2.1f, 3.9f, 4.8f, 5.4f};
    const float c_float_arr[5] = {1.2f, 2.1f, 3.9f, 4.8f, 5.4f};
    
    char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    const char c_char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    
    Awesome awesome_arr[5] = {Awesome(), Awesome(), Awesome(), Awesome(), Awesome()};
    const Awesome c_awesome_arr[5] = {Awesome(), Awesome(), Awesome(), Awesome(), Awesome()};

    std::cout << "Int :" << std::endl;
    iter(int_arr, 5, show);
    std::cout << "Float :" << std::endl;
    iter(float_arr, 5, show);
    std::cout << "Char :" << std::endl;
    iter(char_arr, 5, show);
    std::cout << "Awesome :" << std::endl;
    iter(awesome_arr, 5, show);

    std::cout << "Int :" << std::endl;
    iter(c_int_arr, 5, show);
    std::cout << "Float :" << std::endl;
    iter(c_float_arr, 5, show);
    std::cout << "Char :" << std::endl;
    iter(c_char_arr, 5, show);
    std::cout << "Awesome :" << std::endl;
    iter(c_awesome_arr, 5, show);


    std::cout << "Correction main :" << std::endl;
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];

    iter( tab, 5, print );
    iter( tab2, 5, print );
    return 0;
}
