/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:44:21 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/09 14:27:24 by vpoirot          ###   ########.fr       */
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

    jacobsthal.push_back(0);
    while (current <= size)
    {
        next = current + (2 * prev);
        prev = current;
        current = next;
        jacobsthal.push_back(current);
    }
    if (jacobsthal.back() > size) {
        jacobsthal.pop_back();
        if (jacobsthal.back() != size)
            jacobsthal.push_back(size);
    }
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

std::deque<int> getHigh(std::deque<std::deque<int> > list, int last) {
    std::deque<int> high;
    for (size_t i = 0; i != list.size(); i++) {
        high.push_back(list[i][1]);
    }
    if (last >= 0)
        high.push_front(last);
    std::sort(high.begin(), high.end());
    return (high);
}

std::deque<int> getLow(std::deque<std::deque<int> > list) {
    std::deque<int> low;
    for (size_t i = 0; i != list.size(); i++) {
        low.push_back(list[i][0]);
    }
    return (low);
}

void swapInsertSort(int u, std::deque<int> & high) {
    int tmp = high[u + 1];
    high[u + 1] = high[u];
    high[u] = tmp; 
}

void insertSort(std::deque<int> & high, std::deque<int> low, int i) {
    int nbr = low[i];
    static int orginal_size = high.size();
    i += (high.size() - orginal_size);
    while (i >= 0) {
        if (high[i] < nbr)
            break;
        i--;
    }
    high.push_front(nbr);
    int u = 0;
    while (i >= 0) {
        swapInsertSort(u, high);
        i--;
        u++;
    }
}

void insert_sort(std::deque<int> & high, std::deque<int> low, int z) {
    int nbr = low[z];
    if (z == 0 || (z == 1 && high[0] > nbr)) {
        high.push_front(nbr);
        return ;
    }
    else if (high[z - 1] < nbr && high[z] > nbr) {
        ;//place here
    }
    else if (z == 1 && high[0] < nbr) {
        high.push_front(nbr);
        swapInsertSort(0, high);
        return ;
    }
    else if (high[(z / 2)] > nbr) {
        ;//recurse
    }
}

std::deque<int> jbSort(std::deque<int> high, std::deque<int> low, std::deque<int> jb) {
    for (size_t i = 0; i < jb.size() ; i++)
    {
        if (i == 0)
            insertSort(high, low, 0);
        else
        {
            int z = jb[i];
            while (z > jb[i - 1])
            {
                insertSort(high, low, z);
                z--;
            }
        }
    }
    return (high);
}
