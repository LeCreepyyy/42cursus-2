/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:30:42 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/04 14:23:43 by vpoirot          ###   ########.fr       */
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
void sort(std::deque<T> o1, std::deque<T> o2, std::vector<int> jb) {
    std::deque<std::deque<T>> d1;
    std::deque<std::deque<T>> d2;
    (void)o1;
    (void)o2;
    (void)jb;
    // creation de paire
    // condition pour rester dans la recursivite
    // -sort(d1, d2, jb);
    // insert sort avec jb
    // print le resultat
}

// template<typename T>
// std::deque<std::deque<T> > nestDeque(const std::deque<T>& inputDeque, int depth) {
//     if (depth <= 1) {
//         // Si la profondeur est inférieure ou égale à 1, retourne la deque originale
//         return std::deque<std::deque<T> >(1, inputDeque);
//     } else {
//         // Sinon, appelle récursivement la fonction avec une profondeur réduite
//         std::deque<std::deque<T> > nestedDeque(1, inputDeque);
//         return nestDeque(nestedDeque, depth - 1);
//     }
// }

#endif