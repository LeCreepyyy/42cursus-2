/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:17:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/02 14:18:40 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    if (parsing(argc, argv) == false)
        return (1);
    std::deque<int> d1;
    std::deque<int> d2;
    std::vector<int> e = getJacobsthal((argc - 1) / 2);
    for (std::vector<int>::iterator it = e.begin(); it != e.end(); it++) {
        std::cout << *it << std::endl;
    }
    for (int i = 1; i < argc; i += 2) {
        if (i + 1 == argc)
            d1.push_back(atoi(argv[i]));
        else if (atoi(argv[i]) > atoi(argv[i + 1])) {
            d1.push_back(atoi(argv[i]));
            d2.push_back(atoi(argv[i + 1]));
        }
        else if (atoi(argv[i]) < atoi(argv[i + 1])) {
            d1.push_back(atoi(argv[i + 1]));
            d2.push_back(atoi(argv[i]));
        }
    }
    return (0);
} 