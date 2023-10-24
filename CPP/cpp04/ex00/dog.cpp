/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 01:16:47 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 01:42:06 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"

Dog::Dog(void) : Animal("cat") {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal() {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& cls) {
    std::cout << "Dog copy assignation called" << std::endl;
    this->_type = cls._type;
    return (*this);
}

void    Dog::makeSound(void)const {
    std::cout << this->getType() << ": Bark" << std::endl;
}
