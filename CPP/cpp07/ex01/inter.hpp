/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:12:33 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/27 14:28:37 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

template<typename A>
void    iter(A* array, unsigned int len, void(*f)(A a)) {
    while (len >= 0) {
        f(array[len]);
        len--;
    }
}

#endif