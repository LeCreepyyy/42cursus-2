/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:45:10 by creepy            #+#    #+#             */
/*   Updated: 2023/10/25 10:38:42 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("(null)"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
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

void ClapTrap::attack(const std::string& target) {
    if (this->_hitPoints <= 0) {
        std::cout << "Impossible action because he are destroyed !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
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
