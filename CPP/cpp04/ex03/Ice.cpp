/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 14:33:59 by vpoirot          ###   ########.fr       */
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
    this->_type = cls.clone()->_type;
    std::cout << "Ice copy assignation called" << std::endl;
    return (*this);
}

std::string& Ice::getType(void) {
    return (this->_type);
}

Ice* Ice::clone(void) const {
    Ice* clone = new Ice;
    return (clone);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
