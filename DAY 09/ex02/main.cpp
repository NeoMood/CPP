/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:16:35 by sgmira            #+#    #+#             */
/*   Updated: 2023/03/19 13:17:22 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<class Iter>
void merge_sort(Iter first, Iter last)
{
    if (last - first > 1) {
        Iter middle = first + (last - first) / 2;
        merge_sort(first, middle);
        merge_sort(middle, last);
        std::inplace_merge(first, middle, last);
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
    merge_sort(nbrs.begin(), nbrs.end());
    gettimeofday(&end_time, NULL);
    // long long time_used = (end_time.tv_sec - start_time.tv_sec) * 1000000LL + (end_time.tv_usec - start_time.tv_usec);
    double time_used = (double)(end_time.tv_sec - start_time.tv_sec) + (double)(end_time.tv_usec - start_time.tv_usec) / 1000000.0;

    std::cout << "After: ";
    for (typename Container::iterator it = nbrs.begin(); it != nbrs.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    std::cout << "The sorting algorithm took " << std::fixed << time_used << " us.\n";
}

int main(int ac, char **av)
{
    if(ac < 2)
    {
        std::cerr << "\033[31mError: Number of arguments is not valid!\033[0m" << std::endl;
        return 1;
    }

    std::vector<int> nbrs_vec;
    std::deque<int> nbrs_deq;

    for (int i = 1; i < ac; i++) {
        for (const char* c = av[i]; *c != '\0'; c++) {
            if (!std::isdigit(*c)) {
                std::cout << "\033[31mError: Argument " << av[i] << " is not a digit\033[0m" << std::endl;
                return 1;
            }
        }

        int nbr = std::atoi(av[i]);
        if (nbr < 0) {
            std::cout << "\033[31mError: Argument " << av[i] << " is not a positive number\033[0m" << std::endl;
            return 1;
        }
        if (std::find(nbrs_vec.begin(), nbrs_vec.end(), nbr) == nbrs_vec.end() && std::find(nbrs_deq.begin(), nbrs_deq.end(), nbr) == nbrs_deq.end()) {
            nbrs_vec.push_back(nbr);
            nbrs_deq.push_back(nbr);
        }
        else
        {
            std::cout << "\033[31mError: Argument " << nbr << " is duplicated\033[0m" << std::endl;
            return 1;
        }
    }
    std::cout << "\n\033[32mUsing std::vector\033[0m\n" << std::endl;
    sort_and_print(nbrs_vec);
    std::cout << "\n\033[32mUsing std::deque\033[0m\n" << std::endl;
    sort_and_print(nbrs_deq);
    
    return 0;
}
