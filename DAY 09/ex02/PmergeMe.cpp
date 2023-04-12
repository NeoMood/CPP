/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:20:05 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/12 17:44:25 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Constructors
PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}


// Destructor
PmergeMe::~PmergeMe()
{
}

template<typename cont>
void insertionSort(cont &ctn) 
{
    int size = ctn.size();
    int i = 1;
    while (i < size)
    {
        int j = i;
        while (j > 0 && ctn[j] < ctn[j - 1])
        {
            std::swap(ctn[j], ctn[j - 1]);
            j--;
        }
        i++;
    }
}


template< typename container, class Iter>
void merge_sort(container &ctn, Iter first, Iter last)
{
    if(last - first > 10)
    {
        Iter middle = first + (last - first) / 2;
        merge_sort(ctn, first, middle);
        merge_sort(ctn, middle, last);
        std::inplace_merge(first, middle, last);
    }
    else
    {
        container tmp;
        for(Iter it = first; it != last; ++it)
            tmp.push_back(*it);
        insertionSort(ctn);
        std::copy(tmp.begin(), tmp.end(), first);
    }
}


template <typename Container>
void sort_and_print(Container& nbrs)
{
    std::cout << "Before: ";
    for (typename Container::iterator it = nbrs.begin(); it != nbrs.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    struct timeval start_time, end_time;
    gettimeofday(&start_time, NULL);
    merge_sort(nbrs, nbrs.begin(), nbrs.end());
    gettimeofday(&end_time, NULL);
    double time_used = (double)(end_time.tv_sec - start_time.tv_sec) * 1000000 + (double)(end_time.tv_usec - start_time.tv_usec);

    std::cout << "After: ";
    for (typename Container::iterator it = nbrs.begin(); it != nbrs.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "The sorting algorithm took " << std::fixed << std::setprecision(2) << time_used << " us.\n";
}

void PmergeMe::parse_n_sort(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        for (const char* c = av[i]; *c != '\0'; c++) {
            if (!std::isdigit(*c)) {
                std::cout << "\033[31mError: Argument " << av[i] << " is not a digit\033[0m" << std::endl;
                exit(1);
            }
        }

        int nbr = std::atoi(av[i]);
        if (nbr < 0) {
            std::cout << "\033[31mError: Argument " << av[i] << " is not a positive number\033[0m" << std::endl;
            exit(1);
        }
        nbrs_vec.push_back(nbr);
        nbrs_deq.push_back(nbr);
    }
    std::cout << "\n\033[32mUsing std::vector\033[0m\n" << std::endl;
    sort_and_print(nbrs_vec);
    std::cout << "\n\033[32mUsing std::deque\033[0m\n" << std::endl;
    sort_and_print(nbrs_deq);
}


// Operators
PmergeMe & PmergeMe::operator=(const PmergeMe &assign)
{
	this->nbrs_vec = assign.nbrs_vec;
    this->nbrs_deq = assign.nbrs_deq;
	return *this;
}

