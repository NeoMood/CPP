/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmira <sgmira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:16:35 by sgmira            #+#    #+#             */
/*   Updated: 2023/04/02 23:15:49 by sgmira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// template<class Iter>
// void merge_sort(Iter first, Iter last)
// {
//     if (last - first > 1) {
//         Iter middle = first + (last - first) / 2;
//         merge_sort(first, middle);
//         merge_sort(middle, last);
//         std::inplace_merge(first, middle, last);
//     }
// }

template<class Iter>
void merge_sort(Iter first, Iter last)
{
    if (last - first > 10) {
        Iter middle = first + (last - first) / 2;
        merge_sort(first, middle);
        merge_sort(middle, last);
        std::inplace_merge(first, middle, last);
    }
    else
        //insertionsort()
}

// Function to merge two sorted subarrays
template<typename T>
void merge(T& arr, int left, int mid, int right)
{
    deque<typename T::value_type> leftArr, rightArr;
    int i, j, k;

    // Copy data to temporary deques
    for (i = left; i <= mid; i++)
        leftArr.push_back(arr[i]);
    for (j = mid + 1; j <= right; j++)
        rightArr.push_back(arr[j]);

    // Merge the temporary deques back into the main array
    i = j = 0;
    k = left;
    while (!leftArr.empty() && !rightArr.empty()) {
        if (leftArr.front() <= rightArr.front()) {
            arr[k] = leftArr.front();
            leftArr.pop_front();
        }
        else {
            arr[k] = rightArr.front();
            rightArr.pop_front();
        }
        k++;
    }

    // Copy any remaining elements of the left deque
    while (!leftArr.empty()) {
        arr[k] = leftArr.front();
        leftArr.pop_front();
        k++;
    }

    // Copy any remaining elements of the right deque
    while (!rightArr.empty()) {
        arr[k] = rightArr.front();
        rightArr.pop_front();
        k++;
    }
}

// Function to perform insertion sort on a subarray
template<typename T>
void insertionSort(T& arr, int left, int right)
{
    int i, j;
    typename T::value_type key;
    for (i = left + 1; i <= right; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to perform merge-insert sort on an array
template<typename T>
void mergeInsertSort(T& arr, int left, int right, int k)
{
    if (left < right) {
        if (right - left <= k) {
            insertionSort(arr, left, right);
        }
        else {
            int mid = (left + right) / 2;
            mergeInsertSort(arr, left, mid, k);
            mergeInsertSort(arr, mid + 1, right, k);
            merge(arr, left, mid, right);
        }
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
        nbrs_vec.push_back(nbr);
        nbrs_deq.push_back(nbr);
    }
    std::cout << "\n\033[32mUsing std::vector\033[0m\n" << std::endl;
    sort_and_print(nbrs_vec);
    std::cout << "\n\033[32mUsing std::deque\033[0m\n" << std::endl;
    sort_and_print(nbrs_deq);
    
    return 0;
}
