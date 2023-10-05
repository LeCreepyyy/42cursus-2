/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:14:50 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 15:47:24 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) {
	this->_name = name;
	return;
}

HumanB::~HumanB(void) {
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
