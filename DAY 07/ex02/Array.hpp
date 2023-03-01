/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:30:32 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/01 02:52:33 by sgmira           ###   ########.fr       */
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


// #ifndef ARRAY_HPP
// #define ARRAY_HPP

// #include <iostream>
// #include <string>

// template <typename T>
// class Array
// {
//     private:
//         T *arr;
//         unsigned int length;
//     public:
//     Array() : arr(0), length(0)
//     {}
//     Array(unsigned int n)
//     {
//         this->length = n;
//         this->arr = new T[n];
//     };
//     Array(const Array &other)
//     {
//         *this = other;
//     };
//     Array &operator=(Array const &other)
//     {
// 	    if (this != &other)
// 	    {
// 	    	this->length = other.length;
// 	    	this->arr = new T[other.length];
// 	    	for (unsigned int i = 0; i < length; i++)
// 	    		this->arr[i] = other.arr[i];
// 	    }
// 	    return (*this);
// 	};
//     T  &operator[](unsigned int ind)
//     {
//         if(ind >= this->length)
//             throw std::out_of_range ("index is out of bounds");
//         else
//             return this->arr[ind];
//     }
//     unsigned int size() const
//     {
//         return this->length;
//     }
//     ~Array()
//     {
//         delete [] arr;
//     }
// };

// #endif

// #include <stdexcept>

// template <typename T>
// class Array {
// public:
//     // Default constructor
//     Array() : m_data(nullptr), m_size(0) {}
    
//     // Constructor with size parameter
//     Array(unsigned int size) : m_data(new T[size]), m_size(size) {
//         for (unsigned int i = 0; i < size; i++) {
//             m_data[i] = T(); // default initialize elements
//         }
//     }
    
//     // Copy constructor
//     Array(const Array& other) : m_data(new T[other.m_size]), m_size(other.m_size) {
//         for (unsigned int i = 0; i < m_size; i++) {
//             m_data[i] = other.m_data[i];
//         }
//     }
    
//     // Assignment operator
//     Array& operator=(const Array& other) {
//         if (this != &other) {
//             T* newData = new T[other.m_size];
//             for (unsigned int i = 0; i < other.m_size; i++) {
//                 newData[i] = other.m_data[i];
//             }
//             delete[] m_data;
//             m_data = newData;
//             m_size = other.m_size;
//         }
//         return *this;
//     }
    
//     // Destructor
//     ~Array() {
//         delete[] m_data;
//     }
    
//     // Subscript operator
//     T& operator[](unsigned int index) {
//         if (index >= m_size) {
//             throw std::out_of_range("Array index out of range");
//         }
//         return m_data[index];
//     }
    
//     // Size function
//     unsigned int size() const {
//         return m_size;
//     }
    
// private:
//     T* m_data;
//     unsigned int m_size;
// };


// #endif