/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:55:57 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/04 14:35:22 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name) {
	setName(name);
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
