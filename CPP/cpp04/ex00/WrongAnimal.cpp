/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 01:55:26 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 01:55:26 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default_WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
    *this = copy;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cls) {
    _type = cls._type;
    std::cout << "WrongAnimal copy assignation called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void)const {
    return (this->_type);
}

void    WrongAnimal::makeSound(void)const {
    std::cout << "* SOUND ERROR *" << std::endl;
}