/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:41:03 by vpoirot           #+#    #+#             */
/*   Updated: 2023/11/02 15:20:29 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("defaultType") {
    std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string& type) : _type(type) {
    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
    *this = copy;
    std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& cls) {
    *this = cls;
    return (*this);
}

AMateria::~AMateria(void) {
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const& AMateria::getType(void)const {
    return (this->_type);
}

AMateria* AMateria::clone(void)const {
    AMateria* clone;
    clone->_type = this->_type;
    return (clone);
}
