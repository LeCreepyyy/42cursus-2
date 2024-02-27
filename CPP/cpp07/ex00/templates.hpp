/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:31:49 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/27 14:10:55 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>
# include <string>
# include <typeinfo>

template<typename S>
void    swap(S &a, S &b) {
    S tmp = a;
    a = b;
    b = tmp;
}

template<typename N>
N    min(N a, N b) {
    if (a > b)
        return (b);
    return (a);
}

template<typename X>
X    max(X a, X b) {
    if (a > b)
        return (a);
    return (b);
}

#endif