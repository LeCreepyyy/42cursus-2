/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:45:55 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/19 10:51:06 by creepy           ###   ########.fr       */
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
    char *endPtr;
    while (std::getline(data, line)) {
        std::string date = line.substr(0, 10);
        double rate = strtod(&line[11], &endPtr);
        if (*endPtr != 0) {
            std::cerr << "Error: crash strtod" << std::endl;
            return (1);
        }
        btc.setInMap(date, rate);
    }
    std::getline(input, line);
    while (std::getline(input, line)) {
        if (btc.parsing(line) == false)
            continue;
        std::string date = line.substr(0, 10);
        double value = strtod(&line[13], &endPtr);
        try {
            double rate = btc.getInMap(date);
            std::cout << date << " => " << value << " = " << value * rate << std::endl;
        }
        catch (const BitcoinExchange::noDateFound& e) {
            std::cerr << e.what() << std::endl;
        }
    }
}
