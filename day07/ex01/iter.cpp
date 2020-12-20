/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 22:24:18 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/20 12:18:21 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void iter(T *arr, int len, void fn(T const &)) {
    for (int i = 0; i < len; i++)
        fn(arr[i]);
}

template <typename T>
void show(T const & i) {
    std::cout << i << std::endl;
}

// Class test
class Awesome {
    public:
        Awesome( int n ) : _n( n ) {}
        
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
        int get_n() const { return _n; }

    private:
        int _n;
};

std::ostream& operator<<(std::ostream& os, const Awesome& a) {
    os << a.get_n();
    return os;
}
// End class test

int main() {
    int int_arr[5] = {1, 2, 3, 4, 5};

    float float_arr[5] = {1.2f, 2.1f, 3.9f, 4.8f, 5.4f};
    
    char char_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    
    Awesome awesome_arr[5] = {Awesome(1), Awesome(2), Awesome(3), Awesome(4), Awesome(5)};

    std::cout << "Int :" << std::endl;
    iter(int_arr, 5, show);
    std::cout << "Float :" << std::endl;
    iter(float_arr, 5, show);
    std::cout << "Char :" << std::endl;
    iter(char_arr, 5, show);
    std::cout << "Awesome :" << std::endl;
    iter(awesome_arr, 5, show);
    return 0;
}

/*class Awesome {
    public:
        Awesome( void ) : _n( 42 ) { return; }
        int get( void ) const { return this->_n; }
    private:
        int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
    int tab[] = { 0, 1, 2, 3, 4 };
    Awesome tab2[5];

    iter( tab, 5, print );
    iter( tab2, 5, print );

    return 0;
}*/