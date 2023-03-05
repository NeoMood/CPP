/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:30:32 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/03 20:07:09 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        Array& operator=(const Array& other);
        ~Array();
        T& operator[](unsigned int index);
        unsigned int size() const;
    private:
        T* array;
        unsigned int array_len;    
};

template <typename T>
Array<T>::Array() : array(nullptr), array_len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), array_len(n) 
{
    for (unsigned int i = 0; i < n; i++) {
        array[i] = T();
    }
}

template <typename T>
Array<T>::Array(const Array& copy) : array(new T[copy.array_len]), array_len(copy.array_len) 
{
    for (unsigned int i = 0; i < array_len; i++) {
        array[i] = copy.array[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& assign) {
    if (this != &assign) {
        T* newData = new T[assign.array_len];
        for (unsigned int i = 0; i < assign.array_len; i++) {
            newData[i] = assign.array[i];
        }
        delete[] array;
        array = newData;
        array_len = assign.array_len;
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= this->array_len) {
        throw std::out_of_range("Array index out of range");
    }
    return array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return this->array_len;
}

#endif
