/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:37:29 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/03 10:45:30 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

//set and get var

std::string	Contact::getFirstName(void) {
	return (Contact::_first_name);
}

void	Contact::setFirstName(std::string str) {
	Contact::_first_name = str;
}


std::string	Contact::getLastName(void) {
	return (Contact::_last_name);
}

void	Contact::setLastName(std::string str) {
	Contact::_last_name = str;
}


std::string	Contact::getNickname(void) {
	return (Contact::_nickname);
}

void	Contact::setNickname(std::string str) {
	Contact::_nickname = str;
}


std::string	Contact::getPhoneNumber(void) {
	return (Contact::_phone_number);
}

void	Contact::setPhoneNumber(std::string str) {
	Contact::_phone_number = str;
}


std::string	Contact::getDarkestSecret(void) {
	return (Contact::_darkest_secret);
}

void	Contact::setDarkestSecret(std::string str) {
	Contact::_darkest_secret = str;
}
