/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:45:44 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 15:39:23 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(void) {
	return;
}

Weapon::Weapon(std::string type) {
	this->_type = type;
	return;
}

Weapon::~Weapon(void) {
	return;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string&	Weapon::getType(void) {
	return (this->_type);
}
