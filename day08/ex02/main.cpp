/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:28:33 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/29 14:45:06 by dev              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main() {
    std::cout << "MUTANTSTACK" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(99);

    std::cout << "TOP : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "SIZE : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << std::endl;
    
    std::stack<int> s(mstack);
    
    std::cout << "\nMUTANTSTACK reverse" << std::endl;
    for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); it++)
        std::cout << *it << std::endl;
    
    /* ============================================ */

    std::cout << "\nLIST" << std::endl;
    std::list<int> list;

    list.push_back(5);
    list.push_back(99);

    std::cout << "TOP = " << list.back() << std::endl;
    list.pop_back();
    std::cout << "SIZE = " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << *it << std::endl;
        
    std::list<int> s2(list);
    
    std::cout << "\nLIST reverse" << std::endl;
    for (std::list<int>::reverse_iterator it = list.rbegin(); it != list.rend(); it++)
        std::cout << *it << std::endl;

    return 0;
}