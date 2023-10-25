/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:38:38 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/25 10:42:29 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("(null)_clap_name") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "(null)";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "AD ScavTrap[" << ScavTrap::_energyPoints << "]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &classTrap) {
	std::cout << "DiamondTrap copy assignation called" << std::endl;
	this->_name = classTrap._name + "_clap_name";
	this->_attackDamage = classTrap._attackDamage;
	this->_energyPoints = classTrap._energyPoints;
	this->_hitPoints = classTrap._hitPoints;
	return (*this);
}

void DiamondTrap::attack(std::string target) {
	ScavTrap::attack(target);
}

int	DiamondTrap::getHitPoints(void) {
	return (this->_hitPoints);
}

int	DiamondTrap::getEnergyPoints(void) {
	return (this->_energyPoints);
}

int DiamondTrap::getAttackDamage(void) {
	return (this->_attackDamage);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My name his : " << this->_name << " AND my clap_name is : " << ClapTrap::_name << std::endl;
}
