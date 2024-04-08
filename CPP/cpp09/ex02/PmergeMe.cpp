/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:44:21 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/08 13:55:53 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void isNumber(std::string arg) {
    if (arg[0] == '-')
        throw std::runtime_error("/ERROR/ Negative number");
    for (unsigned long i = 0; i != arg.size(); i++) {
        if (arg[i] > '9' || arg[i] < '0')
            throw std::runtime_error("/ERROR/ Not number");
    }
    return ;
}

bool parsing(int argc, char** argv) {
    try {
        std::vector<int> v;
        for (int i = 1; i != argc; i++) {
            isNumber(argv[i]);
            if (atoll(argv[i]) > 2147483647)
                throw std::runtime_error("/ERROR/ Max int");
            if (v.end() != std::find(v.begin(), v.end(), atoi(argv[i])))
                throw std::runtime_error("/ERROR/ Duplicates");
            v.push_back(atoi(argv[i]));
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return (false);
    }
    return (true);
}

std::deque<int> getJacobsthal(int size) {
    std::deque<int> jacobsthal;
    int prev = 0;
    int current = 1;
    int next = 0;

    while (current <= size)
    {
        jacobsthal.push_back(current);
        next = current + (2 * prev);
        prev = current;
        current = next;
    }
    next = current + (2 * prev);
    jacobsthal.push_back(current);
    return jacobsthal;
}

std::deque<int> setArgToDeque(int argc, char** argv) {
    std::deque<int> argList;
    for (int i = 1; i != argc; i++)
        argList.push_back(atoi(argv[i]));
    return argList;
}

void    swapInPair(std::deque<int> & pair) {
    int tmp = pair.front();
    pair.pop_front();
    pair.push_back(tmp);
}

void    swapPair(std::deque<std::deque<int> > & pair, size_t i) {
    std::deque<int> tmp = pair[i - 1];
    pair[i - 1] = pair[i];
    pair[i] = tmp;
}

bool compareHigh(const std::deque<int> a, const std::deque<int> b) {
    return (a[1] < b[1]);
}

std::deque<std::deque<int> > enterPair(std::deque<int> arg) {
    std::deque<std::deque<int> > chainPair;
    std::deque<int> tmpPair;
    while (arg.size() != 0) {
        tmpPair.push_back(arg.front());
        arg.pop_front();
        tmpPair.push_back(arg.front());
        arg.pop_front();
        if (tmpPair.front() > tmpPair.back())
            swapInPair(tmpPair);
        chainPair.push_back(tmpPair);
        tmpPair.pop_front();
        tmpPair.pop_front();
    }
    std::sort(chainPair.begin(), chainPair.end(), compareHigh);
    return (chainPair);
}

std::deque<int> getHigh(std::deque<std::deque<int> > list) {
    std::deque<int> high;
    for (size_t i = 0; i != list.size(); i++) {
        high.push_back(list[i][1]);
    }
    return (high);
}

std::deque<int> getLow(std::deque<std::deque<int> > list, int last) {
    std::deque<int> low;
    for (size_t i = 0; i != list.size(); i++) {
        low.push_back(list[i][0]);
    }
    low.push_back(last);
    return (low);
}
