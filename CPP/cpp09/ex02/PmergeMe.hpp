/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:30:42 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/11 10:39:12 by vpoirot          ###   ########.fr       */
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
# include <sys/time.h>
# include <ctime>
# include <cstdlib>

// deque
bool parsing(int argc, char** argv);
std::deque<int> getJacobsthal(int size);
std::deque<std::deque<int> > enterPair(std::deque<int> arg);
std::deque<int> setArgToDeque(int argc, char** argv);
std::deque<int> getHigh(std::deque<std::deque<int> > list, int last);
std::deque<int> getLow(std::deque<std::deque<int> > list);
std::deque<int> jbSort(std::deque<int> high, std::deque<int> low, std::deque<int> jb);

// vector
std::vector<int> _getJacobsthal(int size);
std::vector<std::vector<int> > _enterPair(std::vector<int> arg);
std::vector<int> _setArgToDeque(int argc, char** argv);
std::vector<int> _getHigh(std::vector<std::vector<int> > list, int last);
std::vector<int> _getLow(std::vector<std::vector<int> > list);
std::vector<int> _jbSort(std::vector<int> high, std::vector<int> low, std::vector<int> jb);

// DEBUG
void vec_pop_front(std::vector<int> & vec);
void printC(std::deque<int> c);
void printV(std::vector<int> c);

#endif