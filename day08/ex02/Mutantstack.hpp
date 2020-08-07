/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:29:02 by gbaud             #+#    #+#             */
/*   Updated: 2020/08/07 13:38:16 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <vector>
#include <iostream>

template <typename T>
class MutantStack {
	private:
		std::vector<T> _vec;
	public:
		MutantStack();
		MutantStack(const MutantStack&);
		~MutantStack();
		MutantStack &operator=(const MutantStack&);
		void pop();
		T top();
		void push(T);
		int	size();
		bool empty();
	    typedef typename std::vector<T>::iterator iterator;
		iterator begin();
		iterator end();
		void swap(MutantStack<T> &s);
};

#endif