/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:59:30 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 01:44:58 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(void) : _type("default_animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) {
    *this = copy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& cls) {
    _type = cls._type;
    std::cout << "Animal copy assignation called" << std::endl;
    return (*this);
}

Animal::~Animal(void) {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void)const {
    return (this->_type);
}

void    Animal::makeSound(void)const {
    std::cout << "no sound maked... (cricket sound)" << std::endl;
}
