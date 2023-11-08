/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 15:13:01 by vpoirot          ###   ########.fr       */
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
    this->_type = cls.clone()->_type;
    std::cout << "Cure copy assignation called" << std::endl;
    return (*this);
}

std::string& Cure::getType(void) {
    return (this->_type);
}

Cure* Cure::clone(void) const {
    Cure* clone = new Cure;
    return (clone);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
