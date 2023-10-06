/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:26:08 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/06 11:52:48 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong parameters : \"./file <filename> <s1> <s2>\"" << std::endl;
		return (1);
	}
	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	s2.append("\n");
	std::ifstream	file(file_name);
	if (!file.is_open()) {
		std::cout << "Error" << std::endl;
		return (1);
	}
	std::string line;
	std::ofstream file2(file_name.append(".replace"));
	if (!file2.is_open()) {
		file.close();
		std::cout << "Error" << std::endl;
		return (1);
	}
	while (std::getline(file, line)) {
		if (line == s1) {
			file2.write(argv[3], s2.size());
			file2.write("\n", 1);
		}
		else {
			line.append("\n");
			file2.write(line.c_str(), line.size());
		}
	}
	file.close();
	file2.close();
	return (0);
}
