/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:38:38 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/23 13:26:08 by vpoirot          ###   ########.fr       */
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
	std::cout << "AD fragTrap[" << FragTrap::_attackDamage << "]" << std::endl;
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

void DiamondTrap::whoAmI(void) {
	std::cout << "My name his : " << this->_name << " AND my clap_name is : " << ClapTrap::_name << std::endl;
}
