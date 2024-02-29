/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:52:19 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/29 13:38:03 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
    Array<int> Array(3);
    try {
        Array[0] = 29;
        Array[1] = 28;
        Array[2] = 48;
        Array[5] = 25;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Size of array : " << Array.size() << std::endl;
    std::cout << Array[0] << "|" << Array[1] << "|" << Array[2] << std::endl;
}