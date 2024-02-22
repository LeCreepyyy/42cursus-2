/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:57:32 by vpoirot           #+#    #+#             */
/*   Updated: 2024/02/22 13:19:26 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize(void) {
    std::cout << "Serialize default constructor called" << std::endl;
}

Serialize::Serialize(const Serialize& copy) {
    (void)copy;
    std::cout << "Serialize copy constructor called" << std::endl;
}

Serialize& Serialize::operator=(const Serialize& copy) {
    (void)copy;
    std::cout << "Serialize copy assignation called" << std::endl;
    return (*this);
}

Serialize::~Serialize(void) {
    std::cout << "Serialize destructor called" << std::endl;
}

uintptr_t Serialize::serialize(Data* ptr) {
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* Serialize::deserialize(uintptr_t raw) {
    Data* ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}
