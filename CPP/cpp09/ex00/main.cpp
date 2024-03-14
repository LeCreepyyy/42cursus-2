/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:45:55 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/14 13:43:15 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
    (void)argc;
    BitcoinExchange btc;
    std::ifstream dataFile(argv[1]);
    if (!dataFile.is_open()) {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    std::string data;
    std::getline(dataFile, data);
    std::cout << std::fixed << std::endl;
    while (std::getline(dataFile, data)) {
        if (btc.parsing(data) == true) {
            std::string date;
            btc.setMap();
            std::cout << "date clear" << std::endl;
            continue ;
        }
    }
}
