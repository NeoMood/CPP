/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 04:09:18 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/05 17:52:18 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <vector>
#include <stack>
#include <deque>
#include <iterator>
#include <list>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){};
        MutantStack(const MutantStack& copy){ *this = copy; };
        MutantStack& operator=(const MutantStack& assign)
        {
            if (this != &assign) {
                MutantStack<T>::stack::operator=(assign);
            }
                return *this;
        };
        ~MutantStack(){};
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
        reverse_iterator rbegin() { return this->c.rbegin(); }
        reverse_iterator rend() { return this->c.rend(); }
        const_iterator cbegin() { return this->c.cbegin(); }
        const_iterator cend() { return this->c.cend(); }
        const_reverse_iterator crbegin() { return this->c.crbegin(); }
        const_reverse_iterator crend() { return this->c.crend(); }
};

#endif