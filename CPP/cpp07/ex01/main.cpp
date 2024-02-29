/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:12:15 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/29 10:10:52 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inter.hpp"

template<typename B>
void    printArrayValue(B b) {
    std::cout << b << std::endl;
}

int main(void) {
    int arrayInt[5] = {14, 12, 19, 66, 99};
    iter(arrayInt, 5, printArrayValue);
    
    std::string arrayString[3] = {"Cars", "Toy Story", "Nemo"};
    iter(arrayString, 3, printArrayValue);
}
