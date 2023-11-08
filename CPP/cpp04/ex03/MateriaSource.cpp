/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:17:45 by creepy            #+#    #+#             */
/*   Updated: 2023/11/08 22:07:36 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        this->_stock[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (copy._stock[i])
            this->_stock[i] = copy._stock[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& cls) {
    std::cout << "MateriaSource copy assignation called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_stock[i])
            delete this->_stock[i];
        if (cls._stock[i])
            this->_stock[i] = cls._stock[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource(void) {
    std::cout << "MateriaSource destructor called";
    for (int i = 0; i < 4; ++i) {
        if (this->_stock[i])
            delete this->_stock[i];
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
    while (this->_stock[i] != 0 && i < 4)
        i++;
    if (i == 4) {
        std::cout << "Materia can't be learned" << std::endl;
        return;
    }
    this->_stock[i] = m;
    std::cout << m->getType() << " learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    int i = 0;
    while (this->_stock[i] && (this->_stock[i])->getType() != type && i < 4)
        i++;
    if (i == 4 || !this->_stock[i]) {
        std::cout << "Materia can't be created" << std::endl;
        return (NULL);
    }
    std::cout << type << " created" << std::endl;
    return ((this->_stock[i])->clone());
}
