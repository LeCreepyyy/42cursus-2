/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:42:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/09 15:10:48 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : _type("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
    this->_type = copy.getType();
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void) {
    std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& cls) {
    this->_type = cls._type;
    std::cout << "Cure copy assignation called" << std::endl;
    return (*this);
}

std::string const& Cure::getType(void) const {
    return (this->_type);
}

Cure* Cure::clone(void) const {
    Cure* clone = new Cure;
    return (clone);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
