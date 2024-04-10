/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:17:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/10 14:28:29 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printC(std::deque<int> c) {
    while (c.size() != 0) {
        std::cout << c.front() << " ";
        c.pop_front();
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    if (parsing(argc, argv) == false)
        return (1);

    std::deque<int> listArg = setArgToDeque(argc, argv);
    int lastNbr = -1;
    if (listArg.size() % 2 != 0) {
        lastNbr = listArg.back();
        listArg.pop_back();
    }
    std::cout << "Before : ";
    printC(listArg);

    // std::deque<int> :
    clock_t start = clock();
    std::deque<std::deque<int> > list = enterPair(listArg);
    std::deque<int> res = jbSort(getHigh(list, lastNbr), getLow(list), getJacobsthal(getLow(list).size() - 1));
    clock_t end = clock();
    double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    std::cout << "After : ";
    printC(res);

    std::cout << "Time to process a range of " << (argc - 1) << " elements with std::deque : " << time << " us" << std::endl;

    // std::vector<int> :
    std::vector<int> vec(listArg.begin(), listArg.end());
    start = clock();
    std::vector<std::vector<int> > list = _enterPair(listArg);
    std::vector<int> res = _jbSort(_getHigh(list, lastNbr), _getLow(list), _getJacobsthal(getLow(list).size() - 1));
    end = clock();
    time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

    std::cout << "After : ";
    printC(res);

    std::cout << "Time to process a range of " << (argc - 1) << " elements with std::deque : " << time << " us" << std::endl;

    return (0);
}