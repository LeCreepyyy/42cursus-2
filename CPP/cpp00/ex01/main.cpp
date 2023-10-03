/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:51:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/03 17:26:08 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

#include <iostream>

int	main(void) {
	std::cout << "Send ADD for add a new contact" << std::endl;
	std::cout << "Send SEARCH for display your contact" << std::endl;
	std::cout << "Send EXIT for quit" << std::endl;

	std::string buffer;
	std::getline(std::cin, buffer);
	Contact contact;
	PhoneBook phonebook;
	for (; buffer != "EXIT" && !std::cin.eof(); std::getline(std::cin, buffer)) {
		if (buffer != "ADD" && buffer != "SEARCH")
				std::cout << "Wrong command" << std::endl;
		else if (buffer == "ADD") {
			std::cout << "Give a First Name : ";
			std::getline(std::cin, buffer);
			if (phonebook.isprintable(buffer) && buffer[0] == 0)
				continue ;
			contact.setFirstName(buffer);
			std::cout << "Give a Last Name : ";
			std::getline(std::cin, buffer);
			if (phonebook.isprintable(buffer) && buffer[0] == 0)
				continue ;
			contact.setLastName(buffer);
			std::cout << "Give a Nickname : ";
			std::getline(std::cin, buffer);
			if (phonebook.isprintable(buffer) && buffer[0] == 0)
				continue ;
			contact.setNickname(buffer);
			std::cout << "Give a phone number : ";
			std::getline(std::cin, buffer);
			if (phonebook.isprintable(buffer) && buffer[0] == 0)
				continue ;
			contact.setPhoneNumber(buffer);
			std::cout << "Tell me his darkest secret : ";
			std::getline(std::cin, buffer);
			if (phonebook.isprintable(buffer) && buffer[0] == 0)
				continue ;
			contact.setDarkestSecret(buffer);
			phonebook.addContact(contact);
		}
		else if (buffer == "SEARCH") {
			std::cout << "|==========|==========|==========|==========|" << std::endl;
			std::cout << "|     INDEX|FIRST_NAME| LAST_NAME|  NICKNAME|" << std::endl;
			std::cout << "|==========|==========|==========|==========|" << std::endl;
			phonebook.writeContacts();
			std::cout << "|==========|==========|==========|==========|" << std::endl;
			std::cout << "Send index for get info :";
			std::getline(std::cin, buffer);
			if (buffer < "0" || buffer > "7")
				std::cout << "Empty line" << std::endl;
			else
				phonebook.writeInfo(buffer);
		}
	}
	std::cout << "Good Bye !" << std::endl;
	return (0);
}
