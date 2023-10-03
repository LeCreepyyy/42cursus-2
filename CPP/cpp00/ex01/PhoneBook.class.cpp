/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:25:21 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/03 17:26:04 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void) {
	_max = 8;
	_size = 0;
	_current = 0;
	_contacts = new Contact[_max];
	return ;
}

PhoneBook::~PhoneBook(void) {
	delete[] _contacts;
	return ;
}

void	PhoneBook::addContact(const Contact& contact) {
	if (_size < _max) {
		_contacts[_size] = contact;
		_size++;
		if (_current < 8)
			_current = _size;
	}
	else {
		_size = 0;
		_contacts[_size] = contact;
		_size++;
		_current = 8;
	}
}

int	PhoneBook::isprintable(std::string str) {
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] > 127 && str[i] < 32) {
			return (1);
		}
	}
	return (0);
}

void	PhoneBook::writeInfo(std::string buffer) {
	int nbr = std::stoi(buffer);
	if (_contacts[nbr].getFirstName() == "") {
		std::cout << "Empty line" << std::endl;
		return ;
	}
	std::cout << "First Name : " << _contacts[nbr].getFirstName() << std::endl;
	std::cout << "Last Name : " << _contacts[nbr].getLastName() << std::endl;
	std::cout << "NickName : " << _contacts[nbr].getNickname() << std::endl;
	std::cout << "Phone Number : " << _contacts[nbr].getPhoneNumber() << std::endl;
	std::cout << "The Darkest Secret : " << _contacts[nbr].getDarkestSecret() << std::endl;
	return ;
}

void	PhoneBook::writeContacts(void) {
	for (int i = 0; i < PhoneBook::_current; i++) {
		std::cout << "|" << "         " << i << "|";

		std::string	buff = _contacts[i].getFirstName();
		if (buff.length() > 10)
			buff = buff.substr(0, 9).append(".");
		std::cout << std::setw(10) << buff << "|";

		buff = _contacts[i].getLastName();
		if (buff.length() > 10)
			buff = buff.substr(0, 9).append(".");
		std::cout << std::setw(10) << buff << "|";

		buff = _contacts[i].getNickname();
		if (buff.length() > 10)
			buff = buff.substr(0, 9).append(".");
		std::cout << std::setw(10) << buff << "|" << std::endl;
	}
}
