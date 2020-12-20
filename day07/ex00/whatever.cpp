/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 15:06:30 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/20 12:04:13 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T min(const T& a,const T& b) { return (a < b ? a : b); }

template <typename T>
T max(const T& a,const T& b) { return (a > b ? a : b); }

template <typename T>
void swap(T& a, T& b) { 
    T tmp = a;
    a = b;
    b = tmp;
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
    int int_a = 2;
    int int_b = 3;
    float float_a = 2.5f;
    float float_b = 3.5f;
    std::string str_a = "chaine1";
    std::string str_b = "chaine2";
    Awesome awesome_a(50);
    Awesome awesome_b(100);

    std::cout << "=== INT ===" << std::endl;
    std::cout << "a = " << int_a << ", b = " << int_b << std::endl;
    ::swap(int_a, int_b);
    std::cout << "swap :" << std::endl;
    std::cout << "a = " << int_a << ", b = " << int_b << std::endl;
    std::cout << "min( a, b ) = " << ::min(int_a, int_b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(int_a, int_b) << std::endl << std::endl;

    std::cout << "=== FLOAT ===" << std::endl;
    std::cout << "a = " << float_a << ", b = " << float_b << std::endl;
    ::swap(float_a, float_b);
    std::cout << "swap :" << std::endl;
    std::cout << "a = " << float_a << ", b = " << float_b << std::endl;
    std::cout << "min( a, b ) = " << ::min(float_a, float_b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(float_a, float_b) << std::endl << std::endl;

    std::cout << "=== STRING ===" << std::endl;
    std::cout << "str_a = " << str_a << ", str_b = " << str_b << std::endl;
    ::swap(str_a, str_b);
    std::cout << "swap :" << std::endl;
    std::cout << "str_a = " << str_a << ", str_b = " << str_b << std::endl;
    std::cout << "min( str_a, str_b ) = " << ::min(str_a, str_b) << std::endl;
    std::cout << "max( str_a, str_b ) = " << ::max(str_a, str_b) << std::endl << std::endl;

    std::cout << "=== AWESOME ===" << std::endl;
    std::cout << "awesome_a = " << awesome_a << ", awesome_b = " << awesome_b << std::endl;
    ::swap(awesome_a, awesome_b);
    std::cout << "swap :" << std::endl;
    std::cout << "awesome_a = " << awesome_a << ", awesome_b = " << awesome_b << std::endl;
    std::cout << "min( awesome_a, awesome_b ) = " << ::min(awesome_a, awesome_b) << std::endl;
    std::cout << "max( awesome_a, awesome_b ) = " << ::max(awesome_a, awesome_b) << std::endl << std::endl;
    return 0;
}