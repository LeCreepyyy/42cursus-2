/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:16:14 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/21 15:25:15 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool findNbr(const std::string& arg) {
    int isPoint = 0;
    for (size_t i = 0; i < arg.length(); ++i) {
        if (i == arg.length() - 1 && arg[i] == 'f' && isPoint == 1)
            continue;
        if (i == arg.length() - 1 && arg[i] == '.')
            return (false);
        if (arg[i] != '.' && (arg[i] < '0' || arg[i] > '9'))
            return (false);
        if (arg[i] == '.') {
            if (isPoint == 1)
                return (false);
            isPoint++;
        }
    }
    return (true);
}

int    getType(std::string arg) {
    if (arg.size() == 1 && (arg[0] < '0' || arg[0] > '9'))
        return (_CHAR);
    if (findNbr(arg) == true && arg.find('.') == std::string::npos)
        return (_INT);
    if (findNbr(arg) == true && arg.find('f') != std::string::npos)
        return (_FLOAT);
    if (findNbr(arg) == true)
        return (_DOUBLE);
    return (-1);
}

void ScalarConverter::convert(std::string arg) {
    int argType = getType(arg);
    std::cout << argType << std::endl;
}

