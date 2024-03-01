/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:50:32 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/01 10:37:19 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
    std::vector<int> container;
    container.push_back(29);
    container.push_back(48);
    container.push_back(14);

    std::vector<int>::iterator it;

    try {
        it = easyfind(container, 48);
        std::cout << std::distance(container.begin(), it) << std::endl;
        it = easyfind(container, 29);
        std::cout << std::distance(container.begin(), it) << std::endl;
        it = easyfind(container, 87);
        std::cout << std::distance(container.begin(), it) << std::endl;
    }
    catch (const notInContainer& e) {
        std::cout << e.what() << std::endl;
    }
}
