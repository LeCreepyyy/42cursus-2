/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:45:55 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/11 14:18:36 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool parsing(std::string data) {
    size_t i = 0;
    for (; i != 11; ++i) {
        if (data[i] && ((data[i] >= '0' && data[i] <= '9') || data[i] == ',' || data[i] == '-'))
            continue ;
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if (data[5] > '3' || (data[5] == '3' && data[6] > '1')) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if (data[8] > '1' || (data[8] == '1' && data[9] > '2')) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    int value = std::atoi(static_cast<char*>(&data[i]));
    if (value < 0) {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return (false);
    }
    return (true);
}

int main(int argc, char** argv) {
    std::string dataFileName = argv[1];
    std::ifstream dataFile(dataFileName);
    if (!dataFile.is_open()) {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    std::string data;
    std::getline(dataFile, data);
    while (std::getline(dataFile, data)) {
        if (parsing(data) == true) {
            // add too container
            continue ;
        }
    }
}
