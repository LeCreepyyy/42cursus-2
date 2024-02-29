/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eazyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:45:17 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/29 14:11:02 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EAZYFIND_HPP
# define EAZYFIND_HPP

# include <string>
# include <iostream>
# include <vector>

class notInContainer : public std::exception {
    public :
        virtual const char* what() const throw() {
            return ("/ERROR/ Occurence not found");
        }
};

template<typename T>
int    eazyfind(T container, int n) {
    int i = 0;
    for(; container[i]; i++) {
        if (container[i] == n)
            return (i);
    }
    throw notInContainer();
    return (0);
}

#endif