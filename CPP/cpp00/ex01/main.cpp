/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:51:51 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/02 15:50:38 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


#include <iostream>

int	main(void) {
	std::cout << "Send ADD for add a new contact" << std::endl;
	std::cout << "Send SEARCH for display your contact" << std::endl;
	std::cout << "Send EXIT for quit" << std::endl;

	std::string buffer;
	std::cin >> buffer;
	for (; buffer != "EXIT" && !std::cin.eof(); std::cin >> buffer) {
		if (buffer != "ADD" && buffer != "SEARCH")
			std::cout << "Wrong command" << std::endl;
	}
	std::cout << "Good Bye !" << std::endl;
	return (0);
}
