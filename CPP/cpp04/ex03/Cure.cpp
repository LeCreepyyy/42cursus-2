/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/06 23:54:31 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : _type("Cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string type) : _type(type) {
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& copy) {
    *this = copy;
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void) {
    std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& cls) {
    *this = cls;
    return (*this);
}

std::string& Cure::getType(void) {
    return (this->_type);
}

Cure* Cure::clone(void) {
    Cure* clone = new Cure;
    return (clone);
}

void Cure::use(ICharater& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
