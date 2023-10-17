/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:45:10 by creepy            #+#    #+#             */
/*   Updated: 2023/10/17 15:08:30 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("(null)"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName(void) {
    return (this->_name);
}

int ClapTrap::getHitPoints(void) {
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) {
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) {
    return (this->_attackDamage);
}

void ClapTrap::setHitPoints(int amount) {
    this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount) {
    this->_energyPoints = amount;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hitPoints <= 0) {
        std::cout << "Impossible action because he are destroyed !" << std::endl;
        return;
    }
    std::cout << "ClapTrap" << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
    this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints <= 0) {
        std::cout << "nothing happens..." << std::endl;
        return;
    }
    std::cout << this->_name << " taking " << amount << " of damage" << std::endl;
    this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints <= 0) {
        std::cout << "Impossible action because he are destroyed !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " fixes himself" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
}
