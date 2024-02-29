/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:50:32 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/29 14:21:57 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eazyfind.hpp"

int main(void) {
    std::vector<int> container;
    container.push_back(29);
    container.push_back(48);
    container.push_back(14);
    
    int res;
    
    try {
        res = eazyfind(container, 48);
        std::cout << res << std::endl;
        res = eazyfind(container, 29);
        std::cout << res << std::endl;
        res = eazyfind(container, 87); // exception
        std::cout << res << std::endl;
        res = eazyfind(container, 14);
        std::cout << res << std::endl;
    }
    catch (const notInContainer& e) {
        std::cout << e.what() << std::endl;
    }
}
