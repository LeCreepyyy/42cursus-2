/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/06 23:54:26 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : _type("Ice") {
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
    Ice* clone = new Ice;
    return (clone);
}

void Ice::use(ICharater& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
