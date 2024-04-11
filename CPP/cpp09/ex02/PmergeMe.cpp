/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:44:21 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/11 11:44:38 by vpoirot          ###   ########.fr       */
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

void    insert_sort(std::deque<int>& highs, std::deque<int>& lows, int z)
{
    static int s = 0;
    s++;

    if (z == 0)
        highs.insert(highs.begin(), lows[0]);
    else
    {
        int r_min = 0;
        int r_max = s + (z - 1); 
        while (r_min <= r_max)
        {
            int mid = (r_min + r_max) / 2;

            if (highs[mid] < lows[z])
                r_min = mid + 1;
            else
                r_max = mid - 1;
        }
        if (highs.begin() + r_min > highs.end())
            highs.insert(highs.end(), lows[z]);
        else
            highs.insert(highs.begin() + r_min, lows[z]);
    }
}

std::deque<int> jbSort(std::deque<int> high, std::deque<int> low, std::deque<int> jb) {
    for (size_t i = 0; i < jb.size() ; i++)
    {
        if (i == 0)
            insert_sort(high, low, 0);
        else
        {
            int z = jb[i];
            while (z > jb[i - 1])
            {
                insert_sort(high, low, z);
                z--;
            }
        }
    }
    return (high);
}

// -==================================================================================================================-

void    vec_pop_front(std::vector<int> & vec) {
    for (size_t i = 0; i != (vec.size() - 1); i++) {
        vec[i] = vec[i + 1];
    }
    vec.pop_back();
}

std::vector<int> _getJacobsthal(int size) {
    std::vector<int> jacobsthal;
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

std::vector<int> _setArgToDeque(int argc, char** argv) {
    std::vector<int> argList;
    for (int i = 1; i != argc; i++)
        argList.push_back(atoi(argv[i]));
    return argList;
}

void    _swapInPair(std::vector<int> & pair) {
    int tmp = pair.front();
    vec_pop_front(pair);
    pair.push_back(tmp);
}

void    _swapPair(std::vector<std::vector<int> > & pair, size_t i) {
    std::vector<int> tmp = pair[i - 1];
    pair[i - 1] = pair[i];
    pair[i] = tmp;
}

bool _compareHigh(const std::vector<int> a, const std::vector<int> b) {
    return (a[1] < b[1]);
}

std::vector<std::vector<int> > _enterPair(std::vector<int> arg) {
    std::vector<std::vector<int> > chainPair;
    std::vector<int> tmpPair;
    while (arg.size() != 0) {
        tmpPair.push_back(arg.front());
        vec_pop_front(arg);
        tmpPair.push_back(arg.front());
        vec_pop_front(arg);
        if (tmpPair.front() > tmpPair.back())
            _swapInPair(tmpPair);
        chainPair.push_back(tmpPair);
        vec_pop_front(tmpPair);
        vec_pop_front(tmpPair);
    }
    std::sort(chainPair.begin(), chainPair.end(), _compareHigh);
    return (chainPair);
}

std::vector<int> _getHigh(std::vector<std::vector<int> > list, int last) {
    std::vector<int> high;
    for (size_t i = 0; i != list.size(); i++) {
        high.push_back(list[i][1]);
    }
    if (last >= 0)
        high.insert(high.begin(), last);
    std::sort(high.begin(), high.end());
    return (high);
}

std::vector<int> _getLow(std::vector<std::vector<int> > list) {
    std::vector<int> low;
    for (size_t i = 0; i != list.size(); i++) {
        low.push_back(list[i][0]);
    }
    return (low);
}

void    _insert_sort(std::vector<int>& highs, std::vector<int>& lows, int z)
{
    static int s = 0;
    s++;

    if (z == 0)
        highs.insert(highs.begin(), lows[0]);
    else
    {
        int r_min = 0;
        int r_max = s + (z - 1); 
        while (r_min <= r_max)
        {
            int mid = (r_min + r_max) / 2;

            if (highs[mid] < lows[z])
                r_min = mid + 1;
            else
                r_max = mid - 1;
        }
        if (highs.begin() + r_min > highs.end())
            highs.insert(highs.end(), lows[z]);
        else
            highs.insert(highs.begin() + r_min, lows[z]);
    }
}

std::vector<int> _jbSort(std::vector<int> high, std::vector<int> low, std::vector<int> jb) {
    for (size_t i = 0; i < jb.size() ; i++)
    {
        if (i == 0)
            _insert_sort(high, low, 0);
        else
        {
            int z = jb[i];
            while (z > jb[i - 1])
            {
                _insert_sort(high, low, z);
                z--;
            }
        }
    }
    return (high);
}
