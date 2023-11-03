/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/03 15:22:00 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : _type("defaultType") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string type) : _type(type) {
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& copy) {
    *this = copy;
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void) {
    std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& cls) {
    *this = cls;
    return (*this);
}

std::string& Ice::getType(void) {
    return (this->_type);
}

Ice* Ice::clone(void) {
    Ice* clone;
    clone->_type = this->_type;
    return (clone);
}
