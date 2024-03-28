/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 10:30:42 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/28 14:03:32 by vpoirot          ###   ########.fr       */
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

#endif