/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:55:57 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 10:15:49 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(void) {
	setName("NONE");
	return;
}

Zombie::Zombie(std::string name) {
	setName(name);
	return;
}

Zombie::~Zombie(void) {
	std::cout << _name << " deleted" << std::endl;
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
