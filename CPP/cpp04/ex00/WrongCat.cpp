/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 01:59:53 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 02:12:59 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal() {
    *this = copy;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cls) {
    std::cout << "WrongCat copy assignation called" << std::endl;
    this->_type = cls._type;
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound(void)const {
    std::cout << this->getType() << ": * MEOW ERROR *" << std::endl;
}
