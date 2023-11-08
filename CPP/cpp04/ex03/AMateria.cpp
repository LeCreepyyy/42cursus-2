/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:41:03 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/08 22:13:32 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void) {
    std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {
    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) : _type(copy._type) {
    std::cout << "AMateria Copy constructor called" << std::endl;
}
/*
AMateria& AMateria::operator=(const AMateria& cls) {
    this->_type = cls->_type;
    std::cout << "AMateria copy assignation called" << std::endl;
    return (*this);
}*/

AMateria::~AMateria(void) {
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const& AMateria::getType(void)const {
    return (this->_type);
}

void    AMateria::use(ICharacter& target) {
    std::cout << "AMateria use " << target.getName() << std::endl;
}
