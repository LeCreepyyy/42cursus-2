/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:47:10 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/23 14:05:04 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& cls) {
	std::cout << "FragTrap copy assignation called" << std::endl;
	this->_name = cls._name;
	this->_attackDamage = cls._attackDamage;
	this->_energyPoints = cls._energyPoints;
	this->_hitPoints = cls._hitPoints;
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::string buff;
	std::cout << "[" << this->getName() << "] Can I get HIGH FIVES ? (just press ENTER)" << std::endl;
	while (1) {
		std::getline(std::cin, buff);
		if (buff == "")
			break;
		else
			std::cout << "(PRESS ENTER OR DIE IN THIS WHILE LOOP MOUHAHAHAHAHA)" << std::endl;
	}
	std::cout << "[" << this->getName() << "] YYEEEEAAAAAAAHHH !!" << std::endl;
}
