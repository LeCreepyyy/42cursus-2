/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:30:42 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/02 14:26:48 by vpoirot          ###   ########.fr       */
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

template<typename T, class Container = std::deque<T> >
void sort(Container o1, Container o2, std::vector<int> jb) {
    std::deque<Container> d1;
    std::deque<Container> d2;
    // creation de paire
    // condition pour rester dans la recursivite
    sort(d1, d2, jb);
    // insert sort avec jb
    //print le resultat
}

#endif