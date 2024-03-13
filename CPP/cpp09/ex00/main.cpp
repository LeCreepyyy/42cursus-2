/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:45:55 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/13 11:50:37 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool parsing(std::string data) {
    size_t i = 0;
    static int pass = 2;
    std::cout << pass++ << " : ";
    for (; i != data.size(); ++i) {
        if (data[i] && ((data[i] >= '0' && data[i] <= '9') || data[i] == ',' || data[i] == '-' || data[i] == '.'))
            continue ;
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if (i <= 11) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if ((data[5] != '0' && data[5] != '1')
        || (data[8] != '0' && data[8] != '1' && data[8] != '2' && data[8] != '3')) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if ((data[4] >= '0' && data[4] <= '9')
        || (data[7] >= '0' && data[7] <= '9') 
        || (data[10] >= '0' && data[10] <= '9')) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    double value = strtod(&data[11], NULL);
    if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return (false);
    }
    if (data[11] == '-') {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    return (true);
}

int main(int argc, char** argv) {
    (void)argc;
    std::ifstream dataFile(argv[1]);
    if (!dataFile.is_open()) {
        std::cout << "Error: could not open file." << std::endl;
        return (1);
    }
    std::string data;
    std::getline(dataFile, data);
    while (std::getline(dataFile, data)) {
        if (parsing(data) == true) {
            // add too container
            std::cout << "date clear" << std::endl;
            continue ;
        }
    }
}
