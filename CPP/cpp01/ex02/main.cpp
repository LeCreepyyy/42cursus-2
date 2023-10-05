/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:55:43 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 11:16:00 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string str = "HI THIS IS BRAIN";
	const void* address = static_cast<const void*>(&str);
	std::cout << "String  | " << "Value : " << str << " ;\tMemory Address : " << address << std::endl;

	std::string *p_str = &str;
	const void* p_address = static_cast<const void*>(&p_str);
	std::cout << "Pointer | " << "Value : " << *p_str << " ;\tMemory Address : " << p_address << std::endl;

	std::string& r_str = str;
	const void* r_address = static_cast<const void*>(&r_str);
	std::cout << "Refence | " << "Value : " << r_str << " ;\tMemory Address : " << r_address << std::endl;
}
