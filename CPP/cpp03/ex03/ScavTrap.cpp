/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:09:22 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/23 13:55:44 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_attackDamage = 10;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;;
	this->_attackDamage = 10;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cls) {
	std::cout << "ScavTrap copy assignation called" << std::endl;
	this->_name = cls._name;
	this->_attackDamage = cls._attackDamage;
	this->_energyPoints = cls._energyPoints;
	this->_hitPoints = cls._hitPoints;
	return (*this);
}

void ScavTrap::attack(std::string target) {
	if (this->getHitPoints() <= 0) {
		std::cout << "Impossible action because he are destroyed !" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energyPoints -= 1;
}

void ScavTrap::guardGate(void) {
	std::cout << this->getName() << " enter in gate keeper mode !" << std::endl;
}
