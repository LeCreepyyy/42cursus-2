/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:39:33 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 01:41:48 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(void) : Animal("cat") {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal() {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& cls) {
    std::cout << "Cat copy assignation called" << std::endl;
    this->_type = cls._type;
    return (*this);
}

void    Cat::makeSound(void)const {
    std::cout << this->getType() << ": Meow" << std::endl;
}
