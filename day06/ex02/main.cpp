/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 13:02:10 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/28 15:04:28 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
    public:
        virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

void identify_from_pointer(Base * p) { 
    if (dynamic_cast<A*>(p))
        std::cout << " Type A " << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << " Type B " << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << " Type C " << std::endl;
}

void identify_from_reference( Base & p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << " Type A " << std::endl;
    } catch (std::exception &e) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << " Type B " << std::endl;
        } catch (std::exception &e) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << " Type C " << std::endl;
            } catch (std::exception &e) { std::cout << e.what() << std::endl; }
        }
    }
}

int main() {
    A a = A();
    B b = B();
    C c = C();
    
    std::cout << "From Pointer : " << std::endl;
    identify_from_pointer(&a);
    identify_from_pointer(&b);
    identify_from_pointer(&c);
    
    std::cout << std::endl << "From Reference : " << std::endl;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);
    return 0;
}