/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:45:55 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/15 10:30:23 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
    (void)argc;
    BitcoinExchange btc;
    std::ifstream input(argv[1]);
    std::ifstream data("data.csv");
    if (!input.is_open() || !data.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    std::string line;
    std::getline(data, line);
    std::cout << std::fixed << std::endl;
    char *endPtr;
    while (std::getline(data, line)) {
        std::string date = line.substr(0, 10);
        double rate = strtod(&line[11], &endPtr);
        if (*endPtr != 0) {
            std::cerr << "Error: crash strtod" << std::endl;
            return (1);
        }
        std::map<std::string, double> dataMap;
        btc.setMap(date, rate);
    }
}
