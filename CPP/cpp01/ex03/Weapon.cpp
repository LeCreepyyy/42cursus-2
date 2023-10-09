/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:45:44 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/09 10:18:28 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(void) {
	std::cout << "Weapon | Constructor called" << std::endl;
	return;
}

Weapon::Weapon(std::string type) {
	std::cout << "Weapon | Constructor called" << std::endl;
	this->_type = type;
	return;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon | Destructor called" << std::endl;
	return;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string&	Weapon::getType(void) {
	return (this->_type);
}
