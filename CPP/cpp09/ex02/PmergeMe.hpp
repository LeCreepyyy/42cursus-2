/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:30:42 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/03 14:04:40 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
# define PMERGE_HPP

# include <iostream>
# include <string>
# include <deque>
# include <vector>
# include <cstdlib>
# include <algorithm>

bool parsing(int argc, char** argv);
std::vector<int> getJacobsthal(int size);

template<typename T>
void sort(T o1, T o2, std::vector<int> jb) {
    std::deque<T, T> d1;
    std::deque<T, T> d2;
    (void)o1;
    (void)o2;
    (void)jb;
    // creation de paire
    for () {
    }
    // condition pour rester dans la recursivite
    // -sort(d1, d2, jb);
    // insert sort avec jb
    // print le resultat
}

#endif