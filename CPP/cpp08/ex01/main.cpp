/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:49:15 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/25 09:47:23 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    // Span sp = Span(100000);
    // for (int i = 0; i < 100000; i++) {
    //     sp.addNumber(i);
    // }

    Span sp = Span(5);
    sp.addNumber(15);
    sp.addNumber(19);
    sp.addNumber(48);
    sp.addNumber(999);
    sp.addNumber(16);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}