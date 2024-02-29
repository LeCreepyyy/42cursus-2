/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:12:33 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/29 09:59:41 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

# include <string>
# include <iostream>

template<typename A>
void    iter(A* array, int len, void(*f)(A a)) {
    while (--len >= 0) {
        f(array[len]);
    }
}

#endif