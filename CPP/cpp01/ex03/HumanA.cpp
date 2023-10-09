/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:55:07 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/09 10:19:20 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon_info) : _weapon(weapon_info) {
	std::cout << "HumanA | Constructor called" << std::endl;
	this->_name = name;
	return;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA | Destructor called" << std::endl;
	return;
}

void	HumanA::setName(std::string name) {
	this->_name = name;
}

std::string	HumanA::getName(void) {
	return (this->_name);
}

void	HumanA::attack(void) {
	std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
}
