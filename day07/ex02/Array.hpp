/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 23:25:38 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/20 12:51:18 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array {
    private:
        unsigned int s;
        T *array;
    public:
        Array() { s = 0; array = NULL; }
        Array(unsigned int n) { s = n; array = new T[n]; }
        
		Array<T> (const Array &other) {
            s = other.size();
            array = new T[s];
            for (unsigned int i = 0; i < s; i++)
                array[i] = T(other[i]);
        }
        
		Array<T> &operator=(const Array &other) {
            if (this->array)
                delete[] this->array;
            array = new T[other.size()];
            s = other.size();
            for (unsigned int i = 0; i < s; i++)
                array[i] = T(other[i]);
            return (*this);
        }
        
		T &operator[](const unsigned int i) const {
            if (i < s)
                return (array[i]);
            throw OutOfBoundsException();
        }
        
        unsigned int size() const { return s; }
        ~Array<T>(void) {
            if (array)
                delete[] array;
        }

        class OutOfBoundsException : public std::exception { virtual const char *what() const throw() {
            return ("IndexOutOfBoundsException");
        }};
};
