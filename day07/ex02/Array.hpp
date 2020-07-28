/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 23:25:38 by gbaud             #+#    #+#             */
/*   Updated: 2020/07/29 01:00:20 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array {
    private:
        unsigned int s;
        T *array;
    public:
        Array() { array = NULL; s = 0; }
        Array(unsigned int n) { array = new T[n]; s = n; }
        
		Array<T> (const Array &other) {
			delete array;
            s = other.size();
            array = new T[s];
            for (unsigned int i = 0; i < s; i++)
                array[i] = T(other[i]);
        }
        
		Array<T> &operator=(const Array &other) {
            array = new T[other.size()];
            s = other.size();
            for (unsigned int i = 0; i < s; i++)
                array[i] = T(other[i]);
            return (*this);
        }
        
		T &operator[](const unsigned int i) const {
            if (i < s)
                return (array[i]);
            throw std::exception();
        }
        
        int size() const { return s; }
        ~Array<T>(void) { return; }
};
