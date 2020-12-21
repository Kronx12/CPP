/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 23:25:38 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/21 13:46:32 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array {
    private:
        unsigned int _size;
        T *array;
    public:
        Array() { _size = 0; array = NULL; }
        Array(unsigned int n) {
            _size = n;
            array = new T[n]; 
            for (unsigned int i = 0; i < _size; i++)
                array[i] = T();
        }
        
		Array<T> (const Array &other) {
            _size = other.size();
            array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                array[i] = T(other[i]);
        }
        
		Array<T> &operator=(const Array &other) {
            if (this->array)
                delete[] this->array;
            array = new T[other.size()];
            _size = other.size();
            for (unsigned int i = 0; i < _size; i++)
                array[i] = T(other[i]);
            return (*this);
        }
        
		T &operator[](const unsigned int i) const {
            if (i < _size)
                return (array[i]);
            throw std::out_of_range("Index Out Of Range");
        }
        
        unsigned int size() const { return _size; }
        ~Array<T>(void) {
            if (array)
                delete[] array;
        }
};
