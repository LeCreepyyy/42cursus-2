/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:14:50 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/09 10:17:48 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) {
	std::cout << "HumanB | Constructor called" << std::endl;
	this->_name = name;
	return;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB | Destructor called" << std::endl;
	return;
}

void	HumanB::setName(std::string name) {
	this->_name = name;
}

std::string	HumanB::getName(void) {
	return (this->_name);
}

void	HumanB::setWeapon(Weapon& weapon_type) {
	this->_weapon = &weapon_type;
}

void	HumanB::attack(void) {
	std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}
