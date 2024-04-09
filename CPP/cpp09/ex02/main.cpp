/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:17:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/09 11:31:28 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printC(std::deque<int> c) {
    std::cout << "result :" << std::endl;
    while (c.size() != 0) {
        std::cout << c.front() << " | ";
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
    std::deque<std::deque<int> > list = enterPair(listArg);
    std::deque<int> res = jbSort(getHigh(list), getLow(list, lastNbr), getJacobsthal(getLow(list, lastNbr).size() - 1));
    //printC(res);
    return (0);
}