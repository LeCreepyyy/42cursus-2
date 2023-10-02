/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:09:44 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/02 13:52:26 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv) {
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string res;
		for (int i = 1; i < argc; i++) {
			res.append(argv[i]);
		}
		for (std::string::iterator it = res.begin(); it != res.end(); it++) {
			*it = std::toupper(*it);
		}
		std::cout << res << std::endl;
	}
	return (0);
}
