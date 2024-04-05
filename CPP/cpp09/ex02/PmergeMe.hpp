/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:30:42 by vpoirot           #+#    #+#             */
/*   Updated: 2024/04/05 11:07:17 by vpoirot          ###   ########.fr       */
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
std::deque<int> getJacobsthal(int size);
std::deque<std::deque<int>> enterPair(std::deque<int> arg);
std::deque<int> setArgToDeque(int argc, char** argv);

#endif