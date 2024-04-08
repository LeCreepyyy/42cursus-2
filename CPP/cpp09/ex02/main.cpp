/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:17:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/08 14:01:38 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    if (parsing(argc, argv) == false)
        return (1);

    std::deque<int> jb = getJacobsthal((argc - 1) / 2);
    std::deque<std::deque<int> > list;
    std::deque<int> listArg = setArgToDeque(argc, argv);
    int lastNbr = -1;
    if (listArg.size() % 2 != 0) {
        lastNbr = listArg.back();
        listArg.pop_back();
    }
    list = enterPair(listArg);
    std::deque<int> high = getHigh(list);
    std::deque<int> low = getLow(list, lastNbr);
    std::cout << "High :" << std::endl;
    // for (size_t i = 0; i != high.size(); i++) {
    //     std::cout << high[i] << std::endl;
    // }
    // std::cout << "Low :" << std::endl;
    // for (size_t i = 0; i != low.size(); i++) {
    //     std::cout << low[i] << std::endl;
    // }
    return (0);
}