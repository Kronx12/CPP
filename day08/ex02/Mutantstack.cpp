/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:28:57 by gbaud             #+#    #+#             */
/*   Updated: 2020/08/07 13:39:03 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"
#include <vector>

template <typename T>
MutantStack<T>::MutantStack() {
	
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &object) {
	*this = object;
	return (*this);
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &object) {
    if (this != &object)
	    _vec = object._vec;
    return (*this);
	*this = object;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return _vec.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return _vec.end();
}
        
template <typename T>
void MutantStack<T>::push(T val) {
    _vec.push_back(val);
}

template <typename T>
void MutantStack<T>::pop() {
    _vec.pop_back();
}
        
template <typename T>
T MutantStack<T>::top() {
	return *(_vec.end() - 1);
}

template <typename T>
int MutantStack<T>::size() {
	return _vec.size();
}
        
template <typename T>
bool MutantStack<T>::empty() {
    if (_vec.size() == 0)
        return (true);
    return (false);
}

template <typename T>
void MutantStack<T>::swap(MutantStack<T> &s) {
    int max;
    int diff;
    int i = 0;
    bool me;
    T tmp;

    me = s.size() > this->size() ? 0 : 1;
    max = s.size() > this->size() ? s.size() : this->size();
    diff = abs(s.size() - this->size());

    while(i < max) {
        if (i < this->size() && i < s.size()) {
            tmp = _vec[i];
            _vec[i] = s._vec[i];
            s._vec[i] = tmp;
        } else if (i >= this->size() && i < s.size())
            this->push(s._vec[i]);
		else if (i < this->size() && i >= s.size())
            s.push(_vec[i]);
        i++;
    }
            
    while (diff > 0) {
        if(!me)
            s.pop();
        else
	        this->pop();
		diff--;
    }
}