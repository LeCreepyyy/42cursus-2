/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 01:16:47 by creepy            #+#    #+#             */
/*   Updated: 2023/10/26 15:47:03 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"

Dog::Dog(void) : Animal("cat"), _dogBrain(new Brain()) {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(), _dogBrain(new Brain()) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog(void) {
    delete _dogBrain;
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
