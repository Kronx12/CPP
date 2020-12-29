/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:29:02 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/29 14:18:14 by dev              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        MutantStack() : std::stack<T>() {};
        MutantStack(const MutantStack& copy) : std::stack<T>(copy) {};

        MutantStack &operator=(const MutantStack &other) {
            if (this == &other) return (*this);
            this->~MutantStack();
            return *new(this) MutantStack(other);
        };
	
        iterator begin() { return (std::stack<T>::c.begin()); }
        iterator end()   { return (std::stack<T>::c.end());   }

        const_iterator begin() const { return (std::stack<T>::c.begin()); }
        const_iterator end()   const { return (std::stack<T>::c.end());   }

        reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
        reverse_iterator rend()   { return (std::stack<T>::c.rend());   }

        const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
        const_reverse_iterator rend()   const { return (std::stack<T>::c.rend());   }
		
        virtual ~MutantStack() {};
};

#endif