/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:17:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/08 10:27:46 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    if (parsing(argc, argv) == false)
        return (1);

    std::deque<int> jb = getJacobsthal((argc - 1) / 2);
    std::deque<std::deque<int> > list;
    std::deque<int> listArg = setArgToDeque(argc, argv);
    bool last = false;
    int lastNbr;
    if (listArg.size() % 2 != 0) {
        last = true;
        lastNbr = listArg.back();
        listArg.pop_back();
    }
    list = enterPair(listArg);
    return (0);
}