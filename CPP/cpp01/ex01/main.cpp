/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:50:04 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/05 10:48:04 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void) {
	Zombie *zombie = zombieHorde(20, "Michels");
	delete[] zombie;
	return (0);
}
