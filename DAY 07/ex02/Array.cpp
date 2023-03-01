/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:58:39 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/01 02:52:39 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

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
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        T* newData = new T[other.array_len];
        for (unsigned int i = 0; i < other.array_len; i++) {
            newData[i] = other.array[i];
        }
        delete[] array;
        array = newData;
        array_len = other.array_len;
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= array_len) {
        throw std::out_of_range("Array index out of range");
    }
    return array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return array_len;
}