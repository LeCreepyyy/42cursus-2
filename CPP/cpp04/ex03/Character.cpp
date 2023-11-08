/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:18:51 by creepy            #+#    #+#             */
/*   Updated: 2023/11/08 15:08:16 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Anyone") {
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        this->_inv[i]->clone();
}

Character::Character(std::string name) : _name(name) {
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        this->_inv[i]->clone();
}

Character::Character(const Character& copy) {
    *this = copy;
    std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& cls) {
    std::cout << "Character copy assignation called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_inv[i])
            delete this->_inv[i];
        if (cls._inv[i])
            this->_inv[i] = cls._inv[i];
    }
    return (*this);
}

Character::~Character(void) {
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; ++i)
        if (this->_inv[i])
            delete this->_inv[i];
}

std::string const& Character::getName() const {
    return(this->_name);
}

AMateria* Character::getInvSlot(int idx) {
    return (this->_inv[idx]);
}

void    Character::equip(AMateria* m) {
    int i = 0;
    while (this->_inv[i] && i < 4)
        ++i;
    if (i == 4) {
        std::cout << this->_name << " : Inventory full" << std::endl;
        return;
    }
    else
        this->_inv[i] = m;
    std::cout << this->_name << " : take " << m->getType() << std::endl;
}

void    Character::unequip(int idx) {
    if (this->_inv[idx] == 0) {
        std::cout << this->_name << " : this slot is empty" << std::endl;
    }
    std::cout << this->_name << " : unequip " << this->_inv[idx] << std::endl;
    this->_inv[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
    std::cout << this->_name << " : " << std::endl;
    (this->_inv[idx])->use(target);
}
