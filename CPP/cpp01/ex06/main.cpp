/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: creepy <creepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:26:30 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/07 00:27:09 by creepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Arg Error" << std::endl;
	}
	Harl	harl;
	std::string args[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for (; i < 4; ++i) {
		if (args[i] == argv[1])
			break;
	}
	switch (i) {
	case 0:
		harl.complain("DEBUG");
	case 1:
		harl.complain("INFO");
	case 2:
		harl.complain("WARNING");
	case 3:
		harl.complain("ERROR");
		break;
	case 4:
		std::cout << "[ Probably complaining about insignificant problems ]";

	default:
		break;
	}
	return (0);
}
