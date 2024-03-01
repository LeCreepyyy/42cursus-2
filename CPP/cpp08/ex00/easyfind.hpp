/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:45:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/01 10:34:59 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <vector>

class notInContainer : public std::exception {
    public :
        virtual const char* what() const throw() {
            return ("/ERROR/ Occurence not found");
        }
};

template<typename T>
typename T::iterator    easyfind(T& container, int n) {
    std::vector<int>::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end()) {
        throw notInContainer();
    }
    return (it);
}

#endif