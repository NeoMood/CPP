/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:02:33 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/05 20:07:09 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : arr_size()
{
    
}

Span::Span(unsigned int N) : arr_size(N)
{
    
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(Span const &assign)
{
    if (this != &assign)
    {
    	this->arr_size = assign.arr_size;
    }
    return (*this);
};

void Span::addNumber(int num) {
    if (arr.size() >= arr_size) {
        throw std::exception();
        return;
    }
    arr.push_back(num);
    std::cout << "number " << num << " has been added to the span succefully" << std::endl;
}

int Span::shortestSpan() {
    if (arr.size() < 2) {
        throw std::exception();
    }
    std::sort(arr.begin(), arr.end());
    int current_span = arr[1] - arr[0];
    for (unsigned int i = 1; i < arr.size(); ++i) {
        int span = abs(arr[i] - arr[i - 1]);
        if(span <= current_span)
            current_span = span;
    }
    return current_span;
}

int Span::longestSpan() {
    if (arr.size() < 2) {
        throw std::exception();
    }
    return *std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end());
}

void Span::fill_span(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    arr.clear();
    if(std::distance(begin, end) > arr_size)
        throw std::length_error("Error: Span is full\n");
    std::copy(begin, end, std::back_inserter(arr));
}

Span::~Span(){};