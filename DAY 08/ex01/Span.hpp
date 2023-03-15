/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:41:08 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/05 20:06:59 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span {
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        ~Span();
        Span &operator=(Span const &assign);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        void fill_span(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    private:
        unsigned int arr_size;
        std::vector<int> arr;
};



#endif