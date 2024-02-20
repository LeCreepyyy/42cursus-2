/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:10:57 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/20 14:21:50 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Invalid argument" << std::endl;
        return (1);
    }
    std::string arg = argv[1];
    ScalarConverter::convert(arg);
    return (0);
}