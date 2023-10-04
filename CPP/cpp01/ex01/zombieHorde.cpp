/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoirot <vpoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:49:55 by vpoirot           #+#    #+#             */
/*   Updated: 2023/10/04 15:20:38 by vpoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ) {
	Zombie *new_zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
		new_zombie[i].setName(name);
		std::cout << "index:" << i << " ;";
		new_zombie[i].announce();
	}
	return (new_zombie);
}
