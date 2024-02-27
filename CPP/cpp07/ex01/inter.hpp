/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:12:33 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/27 14:27:25 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

template<typename A>
void    iter(A* array, int len, void(*f)(A a)) {
    while (len >= 0) {
        f(array[len]);
        len--;
    }
}

#endif