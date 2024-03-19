/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:03:59 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/19 11:03:01 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
    std::cout << "BitcoinExchange default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& original) {
    *this = original;
    std::cout << "BitcoinExchange copy constructor called" << std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& original) {
    (void)original;
    return (*this);
}

BitcoinExchange::~BitcoinExchange(void) {
    std::cout << "BitcoinExchange destructor called" << std::endl;
}

bool BitcoinExchange::parsing(std::string data) {
    size_t i = 0;
    static int pass = 1;
    std::cout << ++pass << " : ";
    if (data.size() < 13) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    for (; i != data.size(); ++i) {
        if (data[i] && ((data[i] >= '0' && data[i] <= '9') || data[i] == '|' || data[i] == ' ' || data[i] == '-' || data[i] == '.'))
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
    if ((data[5] == '1' && (data[6] > '2' || data[6] < '0'))) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if ((data[8] == '3' && (data[9] > '1' || data[9] < '0'))) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if ((data[4] >= '0' && data[4] <= '9')
        || (data[7] >= '0' && data[7] <= '9') 
        || (data[10] >= '0' && data[10] <= '9')) {
        std::cout << "Error: bad input => \"" << data << "\"" << std::endl;
        return (false);
    }
    if (data[13] == '-') {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    double value = strtod(&data[13], NULL);
    if (value > 1000) {
        std::cout << "Error: too large a number." << std::endl;
        return (false);
    }
    return (true);
}

const char* BitcoinExchange::noDateFound::what() const throw() {
    return ("Error: date is too old");
}

double BitcoinExchange::getInMap(std::string date) {
    double rate;
    std::map<std::string, double>::iterator it = map.find(date);
    if (it != map.end())
        rate = it->second;
    else {
        std::map<std::string, double>::iterator it = map.lower_bound(date);
        if (it != map.begin()) {
            --it;
            rate = it->second;
        }
        else
            throw BitcoinExchange::noDateFound();
    }
    return (rate);
}

void BitcoinExchange::setInMap(std::string str, double value) {
    map.insert(std::make_pair(str, value));
}
