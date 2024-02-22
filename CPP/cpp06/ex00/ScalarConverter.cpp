/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:16:14 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/22 10:55:53 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ScalarConverter.hpp"

// out class ScalarConverter

bool findNbr(const std::string& arg) {
    int isPoint = 0;
    for (size_t i = 0; i < arg.length(); ++i) {
        if (i == 0 && arg[i] == '-')
            continue;
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

void    convertChar(char arg) {
    if (arg >= 32 && arg <= 126)
        std::cout << "char: " << arg << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(arg) << std::endl;
    std::cout << "float: " << static_cast<float>(arg) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(arg) << ".0" << std::endl;
}

void    convertInt(int arg) {
    if (arg >= 32 && arg <= 126)
        std::cout << "char: " <<  static_cast<char>(arg) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << arg << std::endl;
    std::cout << "float: " << static_cast<float>(arg) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(arg) << ".0" << std::endl;
}

void    convertFloat(float arg) {
    if (arg >= 32 && arg <= 126)
        std::cout << "char: " << static_cast<char>(arg) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(arg) << std::endl;
    if (arg - static_cast<int>(arg) == 0) {
        std::cout << "float: " << arg << ".0f" << std::endl;
        std::cout << "double: " << arg << ".0" << std::endl;
    }
    else {
        std::cout << "float: " << arg << "f" << std::endl;
        std::cout << "double: " << arg << std::endl;
    }
}

void    convertDouble(double arg) {
    if (arg >= 32 && arg <= 126)
        std::cout << "char: " << static_cast<char>(arg) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(arg) << std::endl;
    if (arg - static_cast<int>(arg) == 0) {
        std::cout << "float: " << arg << ".0f" << std::endl;
        std::cout << "double: " << arg << ".0" << std::endl;
    }
    else {
        std::cout << "float: " << arg << "f" << std::endl;
        std::cout << "double: " << arg << std::endl;
    }
}

void    specialDisplay(std::string exception) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    float caseFloat = atof(exception.c_str());
    double caseDouble = atof(exception.c_str());
    std::cout << "float: " << caseFloat << "f" << std::endl;
    std::cout << "double: " << caseDouble << std::endl;
}

bool    specialArg(std::string arg) {
	std::string	exceptions[] = {"-inff", "+inff", "-inf", "+inf", "nan", "nanf"};
	for (int i = 0; i < 7; i++) {
		if (arg == exceptions[i]) {
			specialDisplay(exceptions[i]);
            return (true);
		}
	}
    return (false);
}

// in class ScalarConverter

void ScalarConverter::convert(std::string arg) {
    if (specialArg(arg) == true)
        return;
    int argType = getType(arg);
    switch (argType) {
        case -1:
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
            break;
        case _CHAR:
            convertChar(arg[0]);
            break;
        case _INT:
            convertInt(atoi(arg.c_str()));
            break;
        case _FLOAT:
            convertFloat(atof(arg.c_str()));
            break;
        case _DOUBLE:
            convertDouble(atof(arg.c_str()));
            break;
    }
}

