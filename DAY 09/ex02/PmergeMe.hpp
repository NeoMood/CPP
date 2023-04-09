/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:20:02 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/08 16:19:26 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <algorithm>
# include <ctime>
# include <sys/time.h>
# include <unistd.h>
#include <iomanip>

class PmergeMe
{
	public:
		// Constructors
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		
		// Destructor
		~PmergeMe();
		
		// Operators
		PmergeMe & operator=(const PmergeMe &assign);
		void parse_n_sort(int ac, char **av);
		
	private:
		std::vector<int> nbrs_vec;
    	std::deque<int> nbrs_deq;
};

template <typename Container>
void sort_and_print(Container& nbrs);

template<typename cont>
void insertionSort(cont &ctn);

template< typename container, class Iter>
void merge_sort(container &ctn, Iter first, Iter last);

#endif