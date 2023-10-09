/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:55:57 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/09 10:12:24 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void) {
	setName("NONE");
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::Zombie(std::string name) {
	setName(name);
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << _name << " deleted | Destructor called" << std::endl;
	return;
}

std::string	Zombie::getName(void) {
	return (_name);
}

void	Zombie::setName(std::string name) {
	_name = name;
}

void	Zombie::announce(void) {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
