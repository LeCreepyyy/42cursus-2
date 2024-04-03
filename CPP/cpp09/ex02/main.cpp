/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:17:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/03 10:39:47 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    if (parsing(argc, argv) == false)
        return (1);

    std::deque<int> d1;
    std::deque<int> d2;
    
    std::vector<int> jb = getJacobsthal((argc - 1) / 2);
    /*DEBUG*******************/
    std::cout << "JB:" << std::endl;
    for (std::vector<int>::iterator it = jb.begin(); it != jb.end(); it++) {
        std::cout << *it << std::endl;
    }
    /*END DEBUG***************/
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
    
    /*DEBUG*******************/
    std::cout << "\n\nDeques:" << std::endl;
    std::deque<int>::iterator itt = d2.begin();
    for (std::deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
    {
        if (itt != d2.end())
            std::cout << *it << " - " << *itt << std::endl;
        else
            std::cout << *it << " - /" << std::endl;
        itt++;
    }
    /*END DEBUG****************/

    sort(d1, d2, jb);
    
    return (0);
} 