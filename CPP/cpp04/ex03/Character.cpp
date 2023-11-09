/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:18:51 by creepy            #+#    #+#             */
/*   Updated: 2023/11/09 13:09:40 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Anyone") {
    std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inv[i] = 0;
}

Character::Character(std::string name) : _name(name) {
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inv[i] = 0;
}

Character::Character(const Character& copy) : _name(copy.getName()) {
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (copy._inv[i])
            this->_inv[i] = copy._inv[i]->clone();
}

Character& Character::operator=(const Character& cls) {
    std::cout << "Character copy assignation called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (this->_inv[i])
            delete this->_inv[i];
        if (cls._inv[i])
            this->_inv[i] = cls._inv[i]->clone();
    }
    return (*this);
}

Character::~Character(void) {
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_inv[i])
            delete this->_inv[i];
    }
}

std::string const& Character::getName() const {
    return(this->_name);
}

void    Character::equip(AMateria* m) {
    int i = 0;
    if (!m) {
        std::cout << "Given't materia to equip" << std::endl;
        return ;
    }
    while (this->_inv[i] && i < 4)
        i++;
    if (i == 4) {
        std::cout << this->_name << " : Inventory full" << std::endl;
        return;
    }
    this->_inv[i] = m;
    std::cout << this->_name << " : take " << m->getType() << std::endl;
}

void    Character::unequip(int idx) {
    if (idx < 0 || idx >= 4)
        std::cout << "Slot is empty : " << this->_name << std::endl;
    else if (this->_inv[idx] == 0) {
        std::cout << this->_name << " : this slot is empty" << std::endl;
        return;
    }
    std::cout << this->_name << " : unequip " << this->_inv[idx] << std::endl;
    this->_inv[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4 || !(this->_inv)[idx]) {
        std::cout << "Index not found" << std::endl;
        return;
    }
    std::cout << this->_name << " : ";
    (this->_inv[idx])->use(target);
}
