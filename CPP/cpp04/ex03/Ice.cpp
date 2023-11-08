/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 22:08:14 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : _type("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
    this->_type = copy.getType();
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

std::string const& Ice::getType(void) const {
    return (this->_type);
}

Ice* Ice::clone(void) const {
    Ice* clone = new Ice;
    return (clone);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
