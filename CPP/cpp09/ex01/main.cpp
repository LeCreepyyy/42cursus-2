/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:17:31 by vpoirot           #+#    #+#             */
/*   Updated: 2024/03/20 13:20:16 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
    try {
        if (argc != 2)
            throw std::runtime_error("Syntax Error");
        RPN rpn;
        std::string line = argv[1];
        for (unsigned long i = 0; i != line.size(); ++i) {
            if (line[i] >= '0' && line[i] <= '9') {
                rpn.push(line[i] - 48);
                continue;
            }
            else if (line[i] == ' ')
                continue;
            else if (line[i] != '+' && line[i] != '-' && line[i] != '*' && line[i] != '/')
                throw std::runtime_error("Syntax Error");
            else if ((line[i] == '/' || line[i] == '-') && i != 0)
                rpn.swap();
            rpn.calculate(line[i]);
        }
        rpn.end();
        std::cout << rpn.get() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}